/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:18:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 13:11:45 by cyalniz          ###   ########.fr       */
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

int	ft_isSorted(t_struct *stackA);
void	ft_lstFree(t_struct **stackA);
//
void ft_stack_print(t_struct *stackA);

//checks
int	ft_argCheck(char **s);
int	*ft_toArr(char **s, int counter);
int	ft_dupCheck(char **s, int counter);

// operations
void ft_swapA(t_struct **stackA);
void ft_swapB(t_struct **stackB);
void	ft_swapAB(t_struct **stackA, t_struct **stackB);

void	ft_pushA(t_struct **stackA, t_struct **stackB);
void	ft_pushB(t_struct **stackA, t_struct **stackB);

void	ft_rotA(t_struct **stackB);
void	ft_rotB(t_struct **stackB);
void	ft_rotAB(t_struct **stackA, t_struct **stackB);

void	ft_revRotA(t_struct **stackA);
void	ft_revRotB(t_struct **stackB);
void	ft_revRotAB(t_struct **stackA, t_struct **stackB);

//sort
void	ft_mainSort(t_struct **stackA, t_struct **stackB, int ac);
void	ft_smallSort(t_struct **stackA, t_struct **stackB, int ac);


#endif