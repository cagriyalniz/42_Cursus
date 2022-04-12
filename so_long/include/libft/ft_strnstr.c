/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:13:36 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/21 10:44:55 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_len;
	size_t	syc;

	syc = 0;
	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	if (!s1 || !s2)
		return (NULL);
	if (!s2 || !s2[0])
		return ((char *)s1);
	if (len != 0)
	{
		while (*s1 && syc <= len - s2_len)
		{
			if (ft_strncmp(s1, s2, s2_len) == 0)
				return ((char *)s1);
			s1++;
			syc++;
		}
	}
	return (NULL);
}
