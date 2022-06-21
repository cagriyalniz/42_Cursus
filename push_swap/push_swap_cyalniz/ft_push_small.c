/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:30:42 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 23:38:27 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_pushSmallMiniA(t_struct **stackA, int i, int j)
{
	if (j < 3)
	{
		i = 0;
		while (i < j)
		{
			ft_rotA(stackA);
			i++;
		}
	}
	else
	{
		while(i >= j)
		{
			ft_revRotA(stackA);
			i--;
		}
	}
}

void	ft_pushSmallA(t_struct **stackA, t_struct **stackB)
{
	int	i;
	int	j;
	int	k;
	t_struct *head;

	i = 0;
	k = 0;
	head = *stackA;
	j = head->value;
	while (head->next != NULL)
	{
		head = head->next;
		i++;
		if (j > head->value)
		{
			k = i;
			j = head->value;
		}
	}
	if (k != 0)
		ft_pushSmallMiniA(stackA, i, k);
	ft_pushB(stackA, stackB);
}