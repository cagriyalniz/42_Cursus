/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:41:04 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/15 09:49:59 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*dest;

	dest = (void *)malloc(nitems * size);
	if (!dest)
		return (0);
	ft_bzero(dest, nitems * size);
	return (dest);
}
/*
nitems ve size büyüklüğünde içi NULL olan char pointerı oluşturma

| - - | | - - | | - - |
| | = nitems
- - = size  
*/