/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:20:48 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 11:37:38 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_swapA(t_struct **stackA)
{
	t_struct *head;

	if (stackA && (*stackA)->next != NULL)
	{
		head = (*stackA)->next;
		(*stackA)->next = head->next;
		head->next = *stackA;
		*stackA = head;
	}
	write(1, "sa\n", 3);
}

void	ft_swapB(t_struct **stackB)
{
	t_struct *head;

	if (stackB && (*stackB)->next != NULL)
	{
		head = (*stackB)->next;
		(*stackB)->next = head->next;
		head->next = *stackB;
		*stackB = head;
	}
	write(1, "sb\n", 3);
}

void	ft_swapAB(t_struct **stackA, t_struct **stackB)
{
	ft_swapA(stackA);
	ft_swapB(stackB);
}