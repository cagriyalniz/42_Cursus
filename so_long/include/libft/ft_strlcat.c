/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:39:04 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 11:51:41 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	len = ft_strlen(dst);
	i = len;
	if (size <= len)
		return (size + ft_strlen(src));
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
	{
		dst[len] = '\0';
	}
	return (i + ft_strlen(src));
}
