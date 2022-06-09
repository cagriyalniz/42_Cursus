/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:01:43 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 12:24:25 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (!dest && !src)
		return (0);
	while (index < n)
	{
		*(unsigned char *)(dest + index) = *(unsigned char *)(src + index);
		index++;
	}
	return (dest);
}
/*
disaridan alinan *src nin ilk n elemanini
disaridan alinan *dest e atama islemi
*/