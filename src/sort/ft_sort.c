/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:06 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/05 01:43:51 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* örneğin ./push_swap 5 24 12 4 olsun
şuanki durumda a yığını -> 5 24 12 4 b-> boş
*/

int	ft_sort(t_node *stack, int size)
{
	if (ft_check_sorted(stack->a, stack->size_a, 0) == 0) // girilen sayılar sıralımı diye kontrol ediyoruz
	{
		if (size == 2) // eğer 2 sayı varsa swap yap yani -> 5 2 sayılarımız swap yaparsak 2 5 olur.
			ft_swap_a(stack);
		else if (size == 3) // eğer 3 sayı varsa 3 lü sıralama yaptığımız özel fonksiyonumuza gönderiyoruz
			ft_three_number_case_root_a(stack);
		else // eğer 3 den fazla sayı varsa quicksort yaparız
			ft_quicksort_stack_a(stack, size, 0);
	}
	return (0);
}
/*
eğer 2 sayı varsa swapla
3 sayı varsa ona göre sıralama yapar
diğer ihtimallerde quicksort ile sıralama yaparız
*/