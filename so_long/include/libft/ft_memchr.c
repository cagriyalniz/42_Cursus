/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:12:47 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 12:29:27 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (*(unsigned char *)(str + index) == (unsigned char)c)
		{
			return ((void *)(str + index));
		}
		index++;
	}
	return (0);
}
/*
disaridan alinan *str elemaninin ilk n degerinin hafizadaki degerlerine 
bakip disaridan alinan c elemanini arama islemi
*/