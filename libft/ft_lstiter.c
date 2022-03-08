/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:38:13 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/18 11:07:34 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void    ft_up(void *cntnt)
{
    int i = 0;
    while (((char *)cntnt)[i] != '\0')
    {
        ((char *)cntnt)[i] -=32;
        i++;
    }
}
int main()
{
    t_list *x;
    char z[] = "zz";
    char y[] = "yy";
   x = ft_lstnew(z);
    ft_lstadd_front(&x, ft_lstnew(y));
    ft_lstiter(x,ft_up);

    while(x)
    {
        printf("%s", x->content);
        x = x->next;
    }
}*/
