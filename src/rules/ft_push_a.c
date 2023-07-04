/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:20:53 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/05 01:43:05 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_node *stack)
{
// stack b den a ya gönderme
	int	i;

	if (stack->size_b)
	{
		//a ya yeni eleman geleceği için a'nın boyutu 1 artar
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0) //kaydırma işlemi yapılır
			stack->a[i] = stack->a[i - 1]; 
		stack->a[0] = stack->b[0]; // b nin üstteki değerini a nın üstüne attık
		i = -1;
		stack->size_b--; // b den eleman gittiği için b boyutu bir azaltılır
		while (++i < stack->size_b)
			stack->b[i] = stack->b[i + 1]; // ve b elemanları 1 indis yukarı çıkar
		ft_printf("pa\n");
	}
	else
		return ;
}

