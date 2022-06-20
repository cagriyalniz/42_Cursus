/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:40:05 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 14:04:52 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_struct **lst, t_struct *new)
{
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}
