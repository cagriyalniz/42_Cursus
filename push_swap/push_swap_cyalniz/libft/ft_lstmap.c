/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:09:15 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 14:13:15 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_struct	*ft_lstmap(t_struct *lst, int(*f)(int), void (*del)(int))
{
	t_struct	*new_lst;
	t_struct	*elem;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->value));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
