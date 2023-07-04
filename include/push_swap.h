/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:20:30 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:10:34 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_node;

// == arg ==
void	ft_push_argv(char **argv);

// == rotate ==
void	ft_push_a(t_node *stack);
void	ft_push_b(t_node *stack);
void	ft_reverse_rotate_a(t_node *stack);
void	ft_reverse_rotate_b(t_node *stack);
void	ft_reverse_rotate_r(t_node *stack);
void	ft_rotate_a(t_node *stack);
void	ft_rotate_b(t_node *stack);
void	ft_rotate_r(t_node *stack);
void	ft_swap_a(t_node *stack);
void	ft_swap_b(t_node *stack);
void	ft_swap_s(t_node *stack);

// == sort ==
void	ft_temporary_sort(int *root_temp, int size);
void	ft_three_number_case_root_a(t_node *three);
int		ft_push(t_node *stack, int len, int push);
int		ft_sort(t_node *stack, int size);

// == quick_sort ==
void	ft_quicksort_three_root_a_and_b(t_node *stack, int len);
int		ft_mediane_of_numbers(int *pivot, int *stack, int size);
int		ft_quicksort_stack_a(t_node *stack, int len, int count_r);
int		ft_quicksort_stack_b(t_node *stack, int len, int count_r);
int		ft_sort_three_b(t_node *stack, int len);

// == utils ==
void	ft_check_doubles(int *stack, int size);
void	ft_error(int *stack);

int		ft_check_sorted(int *stack, int size, int j);
int		ft_ps_atoi(char *str, int *stack);
int		ft_push_swap_strlen(char **argv);
#endif
