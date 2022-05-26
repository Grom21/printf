/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_sdiu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:58:15 by etisha            #+#    #+#             */
/*   Updated: 2021/11/19 15:58:22 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_countnbr(long long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(long long int n)
{
	char	c;
	int		i;

	i = ft_countnbr(n);
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (i);
}
