/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:23:23 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:10:18 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ps_atoi(char *str, int *root)
{
	unsigned int		i;
	int					sign;
	unsigned long int	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(root);
		number = (str[i] - '0') + (number * 10);
		i++;
	}
	if ((number > 2147483648 && sign == -1)
		|| (number > 2147483647 && sign == 1))
		ft_error(root);
	return (number * sign);
}
