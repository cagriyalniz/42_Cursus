/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:58:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/08 09:24:59 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long long p)
{
	if (p >= 16)
	{
		ft_put_ptr(p / 16);
		ft_put_ptr(p % 16);
	}
	else
	{
		if (p > 9)
			ft_putchar(p - 10 + 'a');
		else
			ft_putchar(p + 48);
	}
}

int	ft_ptrlen(unsigned long long p)
{
	int	len;

	len = 0;
	while (p != 0)
	{
		p /= 16;
		len++;
	}
	return (len);
}

int	ft_print_ptr(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += ft_putchar('0');
		len += ft_putchar('x');
		len += ft_putchar('0');
		return (len);
	}
	len += ft_printstr("0x");
	len += ft_ptrlen(p);
	ft_put_ptr(p);
	return (len);
}
