/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:20:39 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 11:06:38 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*crr;
	t_list	*next;

	if (!lst)
		return ;
	crr = *lst;
	while (crr)
	{
		next = crr->next;
		ft_lstdelone(crr, del);
		crr = next;
	}
	*lst = NULL;
}
//successor: matematik dünyasında bir sonraki elemani ifade eder
// 22nin successor u 23
/*
int main()
{
    t_list *x;
    char y[] = "cagri";
    x = ft_lstnew(y);
    //printf("%s", x->content);
    char z[] = "aaa";
    //ft_lstadd_front(&x, ft_lstnew(y));
    ft_lstadd_front(&x,ft_lstnew(z));

    //printf("%s\n", x->content);
    while(x)
    {
        printf("%s\n", x->content);
        x = x->next;
        
    }

}*/
