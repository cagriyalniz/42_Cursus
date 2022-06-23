/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:03:40 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/23 15:57:31 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_smallSort(t_struct **stackA, t_struct **stackB, int ac)
{
	(void)stackB;
	if (ac == 2)
	{
		if ((*stackA)->value > (*stackA)->next->value)
			ft_swapA(stackA);    
	}
	else if (ac == 3)
		ft_sortThree(stackA);
	else if (ac == 4)
		ft_sourtFour(stackA, stackB);
	else if (ac == 5)
		ft_sortFive(stackA, stackB);
}

void	ft_mainSort(t_struct **stackA, t_struct **stackB, int ac)
{
	(void)stackB;
	if (ac <= 5)
		ft_smallSort(stackA, stackB, ac);
	else if (ac <= 100)
		ft_mediumSort(stackA, stackB);
/* 	else if (ac > 100)
		ft_bigSort(); */
}