/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:32:51 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/15 18:37:56 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;

	index = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	index = ft_strlen(s1);
	while (index && ft_strchr(set, s1[index]))
		index--;
	return (ft_substr(s1, 0, index + 1));
}
