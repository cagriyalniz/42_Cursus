/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:30:42 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 14:02:37 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"



void	ft_pushSmallA(t_struct **stackA, t_struct **stackB, int flag)
{

	t_struct *head;
	head = *stackA;

	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{

			ft_pushB(stackA, stackB);
			break ;
		}
		if(head->index == 1 && flag == 1)
		{
			ft_pushB(stackA, stackB);
			break ;
		}
		ft_rotA(stackA);
		head = *stackA;
	}
	free (head);

}