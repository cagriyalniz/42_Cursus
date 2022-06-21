/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:26:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 12:10:45 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_arg_check(char **s)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (ft_isdigit(s[i][j]) != 1 && (s[i][j] != '-'))
			{
				write(1, "arg error\n", 10);
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}