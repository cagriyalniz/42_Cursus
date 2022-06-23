/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:40:11 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/23 16:26:43 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	add_index(t_struct **stackA)
{
	t_struct	*head;
	int			i;

	i = 0;
	head = 	ft_findMin(*stackA);
	while (head)
	{
		head->index = i;
		i++;
		head = ft_findMin(*stackA);
	}
}

t_struct *ft_lst_fill(char **av, int nmbr)
{
	int i;
	t_struct *head;
	t_struct *temp;

	i = 1;
	head = NULL;
	while (i < nmbr)
	{
		temp = ft_lstnew(ft_atoi(av[i]));
				if (temp == NULL)
				{
					ft_lstFree(&head);
					break ;
				}
		printf("%d \n", temp->value);
		ft_lstadd_back(&head, temp);
		i++;
	}
	add_index(&head);
	// free(av);
	return head;
}