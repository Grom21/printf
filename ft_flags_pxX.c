/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_pxX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:58:59 by etisha            #+#    #+#             */
/*   Updated: 2021/11/19 15:59:03 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnbr_hex(unsigned long int n)
{
	int	i;

	i = 1;
	while (n > 15)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	ft_print_hexdecimal(unsigned long int x, char *base)
{
	if (x > 15)
	{
		ft_print_hexdecimal(x / 16, base);
		ft_print_hexdecimal(x % 16, base);
	}
	else
		write(1, &base[x], 1);
}

int	ft_poin(unsigned long int x, char *base)
{
	int		len;

	len = ft_countnbr_hex(x) + 2;
	write (1, "0x", 2);
	ft_print_hexdecimal(x, base);
	return (len);
}

int	ft_hexdecim(unsigned int x, char *base)
{
	int		len;

	len = ft_countnbr_hex(x);
	ft_print_hexdecimal(x, base);
	return (len);
}
