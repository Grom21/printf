/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:59:24 by etisha            #+#    #+#             */
/*   Updated: 2021/11/19 15:59:32 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_countnbr(long long int n);
int		ft_putnbr(long long int n);
int		ft_countnbr_hex(unsigned long int n);
void	ft_print_hexdecimal(unsigned long int x, char *base);
int		ft_poin(unsigned long int x, char *base);
int		ft_hexdecim(unsigned int x, char *base);
int		ft_work_with_argptr(char c, va_list argptr);
int		ft_printf(const char *str, ...);

#endif
