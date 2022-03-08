/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:15:29 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/08 10:27:47 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number_count(long long int nmbr, int base)
{
	int	len;

	len = 0;
	if (nmbr == 0)
		return (1);
	while (nmbr != 0)
	{
		nmbr = nmbr / base;
		len++;
	}
	return (len);
}

int	ft_putnbr(long int nbr)
{
	long int	n;
	int			len;

	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + 48);
	len += ft_number_count(n, 10);
	return (len);
}

int	ft_printnbr(int nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	len = ft_putnbr(nbr);
	return (len);
}

int	ft_print_unsigned(unsigned int unmbr)
{
	int	len;

	len = 0;
	if (unmbr == 0)
		return (write(1, "0", 1));
	len = ft_putnbr(unmbr);
	return (len);
}
