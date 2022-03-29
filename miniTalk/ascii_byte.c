/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii_byte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:12:29 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/29 12:23:07 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*string_intarray(char	*c)
{
	int	len;
	int	*a;
	int	i;

	i = 0;
	len = (int)ft_strlen(c);
	a = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		a[i] = c[i] - 48;
		i++;
	}
	free(c);
	return (a);
}

int	*ascii_byte(int c)
{
	int		i;
	int		value;
	char	*str;

	i = 0;
	value = 0;
	str = (char *)malloc(sizeof(char) * 8);
	while (i < 8)
	{
		value = c / ft_iterative_power(2, i);
		if (value % 2 == 0)
			str[7 - i] = '0';
		else if (value % 2 != 0)
			str[7 - i] = '1';
		i++;
	}
	str[8] = '\0';
	if (str == NULL)
		return (0);
	return (string_intarray(str));
}

int	byte_ascii(int *numbers)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < 8)
	{
		result += numbers[7 - i] * ft_iterative_power(2, i);
		i++;
	}
	return (result);
}
