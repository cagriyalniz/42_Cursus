/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:44:27 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 11:37:52 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_rotA(t_struct **stackA)
{
	t_struct 	*head;

	if ((*stackA)->next == NULL)
		return ;
	head = (*stackA)->next;
	(*stackA)->next = NULL;
	ft_lstadd_back(&head, *stackA);
	*stackA = head;
	write(1, "ra\n", 3);
}

void	ft_rotB(t_struct **stackB)
{
	t_struct *head;

	if ((*stackB)->next == NULL)
		return ;
	head = (*stackB)->next;
	(*stackB)->next = NULL;
	ft_lstadd_back(&head, *stackB);
	*stackB = head;
	write(1, "rb\n", 3);
}

void	ft_rotAB(t_struct **stackA, t_struct **stackB)
{
	ft_rotA(stackA);
	ft_rotB(stackB);
}