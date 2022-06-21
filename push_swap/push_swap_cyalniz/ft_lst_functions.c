/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:40:11 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 12:27:04 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
		ft_lstadd_back(&head, temp);
		i++;
	}
	// free(av);
	return head;
}