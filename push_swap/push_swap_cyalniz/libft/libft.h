/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:28:59 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/28 17:11:50 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_struct
{
	int				value;
	int				index;
	struct s_struct	*next;
}t_struct;

//is
bool		ft_isdigit(int c);

//to
int			ft_atoi(const char *ch);

//bonus
t_struct	*ft_lstnew(int value);
void		ft_lstadd_front(t_struct **lst, t_struct *new);
int			ft_lstsize(t_struct *lst);
t_struct	*ft_lstlast(t_struct *lst);
void		ft_lstadd_back(t_struct **lst, t_struct *new);

#endif
