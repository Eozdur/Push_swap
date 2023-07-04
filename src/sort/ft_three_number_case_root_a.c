/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_number_case_root_a.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:18 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/05 01:44:10 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_number_case_root_a(t_node *stack)
{
	//örn -> 52 12 61 bu koşula girer ve swap yapılır sonuç -> 12 52 61
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] < stack->a[2])
		ft_swap_a(stack);
	//örn -> 52 32 25 -> swap_a -> 32 52 25 rra-> 25 32 52 oldu 
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		ft_swap_a(stack);
		ft_reverse_rotate_a(stack);
	}
	// örn -> 52 12 33 -> ra -> 12 33 52 
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] < stack->a[2])
		ft_rotate_a(stack);
	// örn -> 12 67 55 -> sa -> 67 12 55 -> 12 55 67
	if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		ft_swap_a(stack);
		ft_rotate_a(stack);
	}
	// örn -> 42 56 31 rra -> 31 42 56
	if (stack->a[0] < stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
		ft_reverse_rotate_a(stack);
}
/*
3 sayı için her ihtimali ona göre işlem yapıyor
*/