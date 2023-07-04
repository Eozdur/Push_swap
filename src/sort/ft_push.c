/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:00 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:09:58 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_node *stack, int len, int push)
{
	if (push == 0)
		ft_push_b(stack);
	else
		ft_push_a(stack);
	len--;
	return (len);
}
