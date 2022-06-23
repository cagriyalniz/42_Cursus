/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:18:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/23 16:25:32 by cyalniz          ###   ########.fr       */
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
void ft_stack_index_print(t_struct *stackA);

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


//three sort
void	ft_sortThree(t_struct **stackA);
void	ft_otherThree(t_struct **stackA, int *nums);

//four sort
void	ft_sourtFour(t_struct **stackA, t_struct **stackB);
void	ft_pushSmallA(t_struct **stackA, t_struct **stackB);
void	ft_pushSmallMiniA(t_struct **stackA, int i, int j);

//five sort
void	ft_sortFive(t_struct **stackA, t_struct **stackB);

//medium sort
void    ft_mediumSort(t_struct **stackA, t_struct **stackB);

//find operations
long int    ft_findMax(t_struct *stackA);
long int    ft_findMin(t_struct *stackA);
void		add_index(t_struct **stackA);

#endif