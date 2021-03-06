/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:23:10 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 14:05:14 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_struct *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
/*int main()
{
	t_struct *a;

	a = ft_lstnew("a");
	a->next = ft_lstnew("b");
	a->next->next = ft_lstnew("c");
	printf("%d\n",ft_lstsize(a));
	while (a)
	{
		printf("%s\n",a->value);
		a = a->next;
	}

}
*/