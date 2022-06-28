/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:18:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 16:33:27 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av);
t_struct *ft_lst_fill(char **av, int nmbr);


void	ft_lst_free(t_struct **stackA);


//checks
int	ft_arg_check(char **s);
int	*ft_to_arr(char **s, int counter);
int	ft_dup_check(char **s, int counter);
int	ft_is_sorted(t_struct *stackA);

// operations
void	ft_swapA(t_struct **stackA);
void	ft_swapB(t_struct **stackB);
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
void	ft_main_sort(t_struct **stackA, t_struct **stackB, int ac);
void	ft_smallSort(t_struct **stackA, t_struct **stackB, int ac);


//three sort
void	ft_sortThree(t_struct **stackA);
void	ft_otherThree(t_struct **stackA, int *nums);

//four sort
void	ft_sourtFour(t_struct **stackA, t_struct **stackB);
void	ft_pushSmallA(t_struct **stackA, t_struct **stackB, int flag);

//five sort
void	ft_sortFive(t_struct **stackA, t_struct **stackB);

//big sort
void	ft_radixSort(t_struct **stackA, t_struct **stackB);

//find operations
void		add_index(t_struct **stackA);


#endif