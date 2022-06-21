/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:08:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 11:37:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_revRotA(t_struct **stackA)
{
	t_struct	*head;
	t_struct	*new;
	
	if ((*stackA)->next == NULL)
		return ;
	head = *stackA;
	while (head->next != NULL)
		head = head->next;
	new = ft_lstnew(head->value);
	head = *stackA;
	while (head->next != NULL)
	{
		if ((head->next)->next == NULL)
		{
			free (head->next);
			head->next = NULL;
		}
		else
			head = head->next;
	}
	ft_lstadd_back(&new, *stackA);
	*stackA = new;
	write(1, "rra\n", 4);
}

void	ft_revRotB(t_struct **stackB)
{
	t_struct	*head;
	t_struct	*new;

	if ((*stackB)->next == NULL)
		return ;
	head = *stackB;
	while (head->next != NULL)
		head = head->next;
	new = ft_lstnew(head->value);
	head = *stackB;
	while (head->next != NULL)
	{
		if ((head->next)->next == NULL)
		{
			free (head->next);
			head->next = NULL;
		}
		else
			head = head->next;
	}
	ft_lstadd_back(&new, *stackB);
	*stackB = new;
	write(1, "rrb\n", 4);
}

void	ft_revRotAB(t_struct **stackA, t_struct **stackB)
{
	ft_revRotA(stackA);
	ft_revRotB(stackB);
}