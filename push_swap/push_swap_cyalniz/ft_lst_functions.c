/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:40:11 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 16:48:59 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_struct *get_next_min(t_struct **stackA)
{
    t_struct    *head;
    t_struct    *min;
    int         flag;
    
    head = *stackA;
    flag = 0;
    min = NULL;
    if (!head)
        return (NULL);
    while (head)
    {
        if ((head->index == -1) && (!flag || head->value < min->value))
        {
            flag = 1;
            min = head;
        }
        head = head->next;
    }
    return (min);
}
// 2 1 3 4 5
/* 
static t_struct *my_min(t_struct **stackA)
{
	t_struct	*head;
	t_struct	*min;

	head = *stackA;
	min = NULL;
	min->value = 2147483647;

	while (head)
	{
		if(head->value < min->value)
			min = head;
		head = head->next;
	}
	return (min);
} */

void	add_index(t_struct **stackA)
{
	t_struct	*head;
	int			i;

	i = 0;
	head = 	get_next_min(stackA);
	while (head)
	{
		head->index = i++;
		head = get_next_min(stackA);
	}
}

t_struct *ft_lst_fill(char **av, int nmbr)
{
	int			i;
	t_struct	*head;
	t_struct	*temp;

	i = 1;
	head = NULL;
	while (i < nmbr)
	{
		temp = ft_lstnew(ft_atoi(av[i]));
		if (temp == NULL)
		{
			ft_lst_free(&head);
			break ;
		}
		ft_lstadd_back(&head, temp);
		i++;
	}
	add_index(&head);	
	return (head);
}