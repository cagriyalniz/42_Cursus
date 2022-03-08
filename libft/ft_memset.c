/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:38:27 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 19:24:25 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i) = (unsigned char)ch;
		i++;
	}
	return (dest);
}
/*
//memset dest'in ilk 'count'(ex: 3) 
//elemaninin adresine ch degerini atama islemi yapilir
int	main()
{
	char dest[] = "asdfgh";
	char ch = 'x';
	size_t count = 3;
	printf("%s", ft_memset(dest, 300, count));
}
*/
