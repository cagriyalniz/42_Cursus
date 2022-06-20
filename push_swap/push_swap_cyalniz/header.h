/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:18:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/20 16:52:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

/* typedef struct s_struct
{
	int				value;
	struct s_struct	*next;
	//struct t_stack	*prev;

}t_struct;
 */
int main(int ac, char **av);
t_struct *ft_lst_fill(char **av, int nmbr);
// int	ft_argv_nmbr(char **s);

//
void ft_stack_print(t_struct *structA);

// rules
void ft_swapA(t_struct **stackA);
void ft_swapB(t_struct **stackB);

void	ft_pushA(t_struct **stackA, t_struct **stackB);
void	ft_pushB(t_struct **stackA, t_struct **stackB);

void	ft_rA(t_struct **stackB);
void	ft_rB(t_struct **stackB);

#endif