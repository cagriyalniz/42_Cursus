/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:21:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/30 09:21:19 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "header.h"

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i) = (unsigned char)ch;
		i++;
	}

	return (dest);
}

void	ft_bzero(void *ch, size_t n)
{
	ft_memset(ch, '\0', n);
}
