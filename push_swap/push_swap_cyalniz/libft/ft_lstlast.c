/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:27:53 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 14:05:14 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_struct	*ft_lstlast(t_struct *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/* int main()
{
	t_struct *a;

	a = ft_lstnew("aa");
	a->next = ft_lstnew("bb");
	a->next->next = ft_lstnew("cc");
	//a->next->next->next = NULL;
	t_struct *b = ft_lstlast(a);
	//printf("%s\n",lst->value);
 	while (a)
	{
		printf("%s\n",a->value);
		a = a->next;
	}
	printf("...%s \n", b->value);

} */