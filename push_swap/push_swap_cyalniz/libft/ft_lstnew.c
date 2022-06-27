/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:19:20 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 10:17:28 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
