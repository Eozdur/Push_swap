/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doubles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:23:09 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:10:13 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_doubles(int *root, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (root[i] == root[j])
				ft_error(root);
			j++;
		}
		i++;
		j = i + 1;
	}
}
/*
tekrarlanan elemanlarını kontrol ediyor
*/