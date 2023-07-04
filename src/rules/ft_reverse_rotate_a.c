/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:21:05 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:08:59 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_node *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	ft_printf("rra\n");
}
/*
rotate a'nın tersi
son eleman başa geliyor
*/
