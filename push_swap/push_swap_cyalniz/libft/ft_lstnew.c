/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:19:20 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/29 16:19:14 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_struct	*ft_lstnew(int value)
{
	t_struct	*cntn;

	cntn = (t_struct *)malloc(sizeof(t_struct));
	if (!cntn)
		return (NULL);
	cntn->value = value;
	cntn->index = -1;
	cntn->next = NULL;
	return (cntn);
}
