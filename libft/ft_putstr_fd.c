/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:37:14 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/15 16:29:11 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if (s != NULL)
	{
		index = 0;
		while (s[index])
		{
			ft_putchar_fd(s[index], fd);
			index++;
		}
	}
}
/*
 if (s != NULL)
 {
     index = 0;
     while (*s)
     {
         ft_putchar_fd(*s, fd);
     }
 }
 
void	ft_putchar_fd(char c, int fd)

disaridan alinan *s nin elemanlarını sirayla yazdirma(fd'leme) islemi


 */
