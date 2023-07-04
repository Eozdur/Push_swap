/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:20:58 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:08:54 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_node *stack)
{
	int	i;

	if (stack->size_a)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		ft_printf("pb\n");
	}
	else
		return ;
}
/*
a yığınından b yığınına top elemanını yolla
a yığınından gittiği için boyut 1 azalır
b yığını 1 artar
*/
