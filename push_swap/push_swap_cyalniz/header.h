/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:18:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/28 17:07:36 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "./libft/libft.h"
# include <stdlib.h>

t_struct	*ft_lst_fill(char **av, int nmbr);
void		ft_lst_free(t_struct **stackA);

//checks
int			ft_arg_check(char **s);
int			*ft_to_arr(char **s, int counter);
int			ft_dup_check(char **s, int counter);
int			ft_is_sorted(t_struct *stackA);
void		ft_max_min_check(char *a);

// operations
void		ft_swap_a(t_struct **stackA);
void		ft_swap_b(t_struct **stackB);
void		ft_swap_ab(t_struct **stackA, t_struct **stackB);

void		ft_push_a(t_struct **stackA, t_struct **stackB);
void		ft_push_b(t_struct **stackA, t_struct **stackB);

void		ft_rot_a(t_struct **stackB);
void		ft_rot_b(t_struct **stackB);
void		ft_rot_ab(t_struct **stackA, t_struct **stackB);

void		ft_rev_rot_a(t_struct **stackA);
void		ft_rev_rot_b(t_struct **stackB);
void		ft_rev_rot_ab(t_struct **stackA, t_struct **stackB);

//sort
void		ft_main_sort(t_struct **stackA, t_struct **stackB, int ac);
void		ft_smallSort(t_struct **stackA, t_struct **stackB, int ac);

//three sort
void		ft_sort_three(t_struct **stackA);
void		ft_other_three(t_struct **stackA, int *nums);

//four sort
void		ft_sourt_four(t_struct **stackA, t_struct **stackB);
void		ft_push_small_a(t_struct **stackA, t_struct **stackB, int flag);

//five sort
void		ft_sort_five(t_struct **stackA, t_struct **stackB);

//big sort
void		ft_radixSort(t_struct **stackA, t_struct **stackB);

//find operations
void		add_index(t_struct **stackA);
#endif