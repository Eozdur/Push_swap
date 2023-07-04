/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:04:10 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/13 00:04:12 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_u(unsigned int u);
int	ft_x(unsigned int x, int b);
int	ft_p(unsigned long p);

#endif
