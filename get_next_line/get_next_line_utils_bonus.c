/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:36:37 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/01 12:58:56 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strchr(const char *str, int ch)
{
	if (!str)
		return (0);
	while (*str != '\0' && (char)ch != *str)
		str++;
	if ((char)ch == *str)
		return ((char *)str);
	return (0);
}

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str);
	str2 = (char *)malloc(len + 1);
	if (!str2)
		return (NULL);
	ft_memcpy(str2, str, len + 1);
	return (str2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (index < len && s[index + start] != '\0')
		index++;
	dest = (char *)malloc((sizeof(char) * index) + 1);
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (s[index2] != '\0')
	{
		if (index2 >= start && index < len)
			dest[index++] = s[start++];
			index2++;
	}
	dest[index] = '\0';
	return (dest);
}

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
