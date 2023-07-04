/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:20:38 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/05 01:42:39 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_argv(char **argv)
{
	t_node	stack; // stack yapısı oluşturduk
	int		size; 
	int		i;

	i = -1;
	size = ft_push_swap_strlen(argv); // girilen argüman uzunluğunu tuttuk 
	stack.a = malloc(sizeof(int) * size); // a yığını için yer açtık
	if (!stack.a)
		return ;
	stack.size_a = size; // a yığının boyutu girilen argüman kadar olucak 
	stack.b = malloc(sizeof(int) * size); //  b yığıını için yer açtık
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0; // b yığını en başlta boş olucak
	while (++i < size)
		stack.a[i] = ft_ps_atoi(argv [i], stack.a); // a yığınımıza argümanları atoi ile teker teker yığınımıza ekliyoruz
	ft_check_doubles(stack.a, size); // birden fazla aynı sayı varmı onu kontrol ediyoruz
	ft_sort(&stack, size); // sıralama işlemi için stack yapımızı gönderiyoruz
	free(stack.a);
	free(stack.b);
}
/*
a ve b yığını oluşturuluyor
a yığını atoi ile tek tek dolduruluyor
*/