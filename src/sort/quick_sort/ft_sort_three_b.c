/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:50 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:09:52 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_three_b(t_node *stack, int len)
{
	if (len == 1)
		ft_push_a(stack);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			ft_swap_b(stack);
		while (len--)
			ft_push_a(stack);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
			{
				ft_swap_a(stack);
			}
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_push(stack, len, 1);
			else
				ft_swap_b(stack);
		}
	}
	return (0);
}
