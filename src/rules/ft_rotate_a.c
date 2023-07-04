/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:21:19 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:09:23 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_node *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	i = 0;
	tmp = stack->a[i];
	i++;
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	ft_printf("ra\n");
}
/*
a yığının tüm elemanlarını bir üst indise taşır
ilk eleman son elemana dönüşür
*/