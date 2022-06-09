/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:27:53 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/19 12:32:29 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
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
	t_list *a;

	a = ft_lstnew("aa");
	a->next = ft_lstnew("bb");
	a->next->next = ft_lstnew("cc");
	//a->next->next->next = NULL;
	t_list *b = ft_lstlast(a);
	//printf("%s\n",lst->content);
 	while (a)
	{
		printf("%s\n",a->content);
		a = a->next;
	}
	printf("...%s \n", b->content);

} */