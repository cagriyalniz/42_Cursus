/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:36:34 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/19 13:00:25 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
/*void del(void *cntnt)
{
    ft_bzero(cntnt, ft_strlen(cntnt));
}*/
/* int main()
{
    t_list *liste;
    char x[] = "xyz";
    char y[] = "abc";
    liste = ft_lstnew(x);
    liste->next = ft_lstnew(y);
    char *mac = ft_strdup(liste->content);
    printf("maindeki liste yazdirmasi: %s \n", liste->content);    
    ft_lstdelone(liste, del);
    int i = 0;
    while (*mac)
    {
        printf("%c\n", *mac);
        mac++;
    }
    
    printf("boş mu geldi acaba: %s", liste->content);
}
 */
