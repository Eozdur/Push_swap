/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temporary_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:11 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:10:03 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_temporary_sort(int *stack_tmp, int size)
{
	int	i;
	int	j;
	int	temporaire;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack_tmp[i] > stack_tmp[j])
			{
				temporaire = stack_tmp[i];
				stack_tmp[i] = stack_tmp[j];
				stack_tmp[j] = temporaire;
			}
			j++;
		}
		i++;
	}
}
/*
BUBBLE SORT
*/