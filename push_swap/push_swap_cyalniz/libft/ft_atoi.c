/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:23:12 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/19 16:05:11 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *ch)
{
	int				i;
	int				sign;
	unsigned long	res;

	res = 0;
	sign = 1;
	i = 0;
	while ((ch[i] >= '\t' && ch[i] <= '\r') || ch[i] == ' ')
		i++;
	if (ch[i] == '-')
		sign = -1;
	if (ch[i] == '-' || ch[i] == '+')
		i++;
	while (ch[i] > 47 && ch[i] < 58)
	{
		res = (ch[i] - 48) + (res * 10);
		i++;
	}
	if (res > LONG_MAX && sign == -1)
		return (0);
	if (res > LONG_MAX && sign == 1)
		return (-1);
	return (res * sign);
}
