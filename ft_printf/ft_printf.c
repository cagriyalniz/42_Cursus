/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:35:14 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/14 15:07:43 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, int), format);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str,  ...)
{
	va_list	args;
	int		index;
	int		len;

	index = 0;
	len = 0;
	va_start(args, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			len += ft_formats(args, str[index + 1]);
			index++;
		}
		else
			len += ft_putchar(str[index]);
		index++;
	}
	va_end(args);
	return (len);
}

int	main(){
	
	int x = 5;
	char y = 'a';
	char *z = "cagri";
	int f = 123123123;

	ft_printf("f: %x" ,f);
	//ft_printf("\n%d", ft_printf("x: %d,   y: %c,   z: %s, adres: %p" ,x, y, z, &x));
	//printf("%d", printf("cagri"));
	
}