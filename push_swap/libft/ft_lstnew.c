/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:19:20 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/19 16:11:54 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
