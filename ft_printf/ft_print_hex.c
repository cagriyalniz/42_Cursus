/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:19:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/28 16:53:54 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// int adres x
int	ft_number_count_hex(unsigned int nmbr)
{
	int	len;

	len = 0;
	while (nmbr != 0)
	{
		nmbr = nmbr / 16;
		len++;
	}
	return (len);
}

void	ft_put_hex(unsigned int hex, const char format)
{
	if (hex >= 16)
	{
		ft_put_hex(hex / 16, format);
		ft_put_hex(hex % 16, format);
	}
	else
	{
		if (hex > 9 && format == 'x')
			ft_putchar(hex - 10 + 'a');
		if (hex > 9 && format == 'X')
			ft_putchar(hex - 10 + 'A');
		else if (hex <= 9)
			ft_putchar(hex + 48);
	}
}

int	ft_print_hex(unsigned int hex, const char format)
{
	if (hex == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		ft_put_hex(hex, format);
	return (ft_number_count_hex(hex, 16));
}
