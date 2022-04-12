/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:30:39 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 11:50:41 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (s[index])
	{
		if (s[index] == c)
			index++;
		else
		{
			count++;
			while (s[index] && s[index] != c)
				index++;
		}
	}
	return (count);
}

static char	*ft_make_words(char *word, char const *s, int j, int word_ln)
{
	int	index;

	index = 0;
	while (word_ln > 0)
		word[index++] = s[j - word_ln--];
	word[index] = 0;
	return (word);
}

static char	**ft_split_words(char **res, char const *s, char c, int word_ct)
{
	int	s_index;
	int	res_index;
	int	word_ln;

	res_index = 0;
	s_index = 0;
	word_ln = 0;
	while (s[s_index] && res_index < word_ct)
	{
		while (s[s_index] && s[s_index] == c)
			s_index++;
		while (s[s_index] && s[s_index] != c)
		{
			s_index++;
			word_ln++;
		}
		res[res_index] = (char *)malloc(sizeof(char) * (word_ln + 1));
		if (!res[res_index])
			return (NULL);
		ft_make_words (res[res_index], s, s_index, word_ln);
		word_ln = 0;
		res_index++;
	}
	res[res_index] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		word_ct;
	char	**res;

	if (s == NULL)
		return (NULL);
	word_ct = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_ct + 1));
	if (!res)
		return (NULL);
	ft_split_words (res, s, c, word_ct);
	return (res);
}
