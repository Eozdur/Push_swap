/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_stack_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:22:38 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/05 01:44:35 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*  
	quicksort algoritmasında bir pivot değeri belirleriz örn->
	a yığını -> 42 12 62 6 24
	bu dizinin pivot değerini ortanca değer yapıcam bunun için bubble sort ile dizimi sıralarım
	->6 12 24 42 62 ortanca 24 pivot = 24 olur

	şimdi pivot değerim belli amacım pivot değerimden küçük değerleri b yığınına yollamak(pb)
	küçükse pb ile karşıya at değilse ra ile sayıyı en alta al 
	eğer pivot en alta inerse rra yap en üste getir
	örn:
	a yığını -> 42 12 62 6 24 ->  12 62 6 24 42 -> 62 6 24 42 -> 6 24 42 62 -> 24 42 62 oldu 
	b yığını -> 12 6
	sonra recursive fonksiyon kullanarak birdaha quicksort fonksiyonuna atıcaz ama a yığınını ayrı b yığınını ayrı
	a yığınını attık 24 42 62 -> zaten sıralanmış olduğu için hiçbir işlem yapılmaz
	quicksort_b fonksiyonunda aynı işlemleri yapıcaz fakat tüm değerler a yığınına geri gelicek
	b yığını 12 6 -> iki elemalı olduğu için sb -> 6 12 ve pa pa yaparak işlemleri sonlandırırız
*/

int	ft_quicksort_stack_a(t_node *stack, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (ft_check_sorted(stack->a, len, 0) == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		ft_quicksort_three_root_a_and_b(stack, len);
		return (1);
	}
	if (!ft_mediane_of_numbers(&pivot, stack->a, len))
		return (0);
	//printf("ORTANCA :%d",pivot);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (len--))
			ft_push_b(stack);
		else if (++count_r)
			ft_rotate_a(stack);
	}
	while ((numbers / 2 + numbers % 2 != stack->size_a) && count_r--)
		ft_reverse_rotate_a(stack);
	return (ft_quicksort_stack_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_stack_b(stack, numbers / 2, 0));
	return (1);
}
/*
ortalardan pivot değeri alırız
pivota göre quicksort işlemi yaparız
*/
