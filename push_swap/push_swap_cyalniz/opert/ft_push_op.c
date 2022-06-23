/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:30:46 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 16:45:59 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void ft_pushA(t_struct **stackA, t_struct **stackB)
{
	t_struct *head;

	if (*stackB)
	{
		head = (*stackB)->next;
		(*stackB)->next = *stackA;
		*stackA = *stackB;
		*stackB = head;
		write(1, "pa\n", 3);
	}
}

void ft_pushB(t_struct **stackA, t_struct **stackB)
{
	t_struct *head;

	if (*stackA)
	{
		head = (*stackA)->next;
		(*stackA)->next = *stackB;
		*stackB = *stackA;
		*stackA = head;
		write(1, "pb\n", 3);
	}
}