/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:44:27 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 16:52:35 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_rA(t_struct **stackA)
{
	t_struct *head;

	if ((*stackA)->next == NULL)
		return ;
	head = (*stackA)->next;
	(*stackA)->next = NULL;
	ft_lstadd_back(&head, *stackA);
	*stackA = head;
	write(1, "ra\n", 3);
}

void	ft_rB(t_struct **stackB)
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