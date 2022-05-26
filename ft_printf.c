/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:42:21 by etisha            #+#    #+#             */
/*   Updated: 2021/11/13 18:42:25 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_work_with_argptr(char c, va_list argptr)
{
	if (c == 'c')
		return (ft_putchar(va_arg(argptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(argptr, char *)));
	else if (c == 'p')
		return (ft_poin(va_arg(argptr, unsigned long int), "0123456789abcdef"));
	else if (c == 'd')
		return (ft_putnbr(va_arg(argptr, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(argptr, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(argptr, unsigned int)));
	else if (c == 'x')
		return (ft_hexdecim(va_arg(argptr, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_hexdecim(va_arg(argptr, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		print;
	va_list	argptr;
	int		i;

	va_start (argptr, str);
	print = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		if (str[i] == '%')
		{
			i++;
			print = print + ft_work_with_argptr(str[i], argptr);
		}
		else
			print = print + ft_putchar(str[i]);
		i++;
	}
	va_end(argptr);
	return (print);
}
