/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_rules.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:12:03 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/06 10:50:44 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*cntn;

	cntn = (t_list *)malloc(sizeof(t_list));
	if (!cntn)
		return (NULL);
	cntn->content = content;
	cntn->next = NULL;
	return (cntn);
}

int main() 
{
    
  ft_lstnew("ali");
	
    
    return 0;
}