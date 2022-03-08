/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:47:45 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/15 09:57:55 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	index = 0;
	if (s == 0)
		return ;
	while (s[index])
	{
		(*f)(index, &s[index]);
		index++;
	}
}
/*
void iter(unsigned int i, char *s)
{
s[i] += 32;
}
 */
