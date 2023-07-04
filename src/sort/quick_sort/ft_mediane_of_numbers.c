/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mediane_of_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:30 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:09:43 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mediane_of_numbers(int *pivot, int *stack, int size)
{
	int		*temporaire_root;
	int		i;

	temporaire_root = (int *)malloc(size * sizeof(int));
	if (!temporaire_root)
		return (0);
	i = 0;
	while (i < size)
	{
		temporaire_root[i] = stack[i];
		i++;
	}
	ft_temporary_sort(temporaire_root, size);
	*pivot = temporaire_root[size / 2];
	free(temporaire_root);
	return (1);
}
/*
ortalardan pivot değeri alır
*/