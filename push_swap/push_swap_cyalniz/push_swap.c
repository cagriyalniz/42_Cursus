/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:03:40 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 13:15:25 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_smallSort(t_struct **stackA, t_struct **stackB, int ac)
{
	if (ac == 2)
	{
		if ((*stackA)->value > (*stackA)->next->value)
			ft_swapA(stackA);    
	}
	else if (ac == 3)
		ft_sortThree(stackA);
	else if (ac == 4)
		ft_sortFour(stackA, stackB);
	else if (ac == 5)
		ft_sortFive(stackA, stackB);
}

void	ft_mainSort(t_struct **stackA, t_struct **stackB, int ac)
{
	if (ac <= 5)
		ft_smallSort(stackA, stackB, ac);
/* 	else if (ac <= 100)
		ft_mediumSort();
	else if (ac > 100)
		ft_bigSort(); */
}