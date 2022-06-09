/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:33:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/12 16:45:51 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ch, size_t n)
{
	ft_memset(ch, '\0', n);
}
/*
memset fonksiyonu ile, parametreden gelen *ch'ın n elemanına NULL atama
*/