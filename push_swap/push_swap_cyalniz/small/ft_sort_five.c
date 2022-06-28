/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:33:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 13:01:04 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sortFive(t_struct **stackA, t_struct **stackB)
{
	int flag = 0;
	ft_pushSmallA(stackA, stackB, flag);
	flag = 1;
	ft_pushSmallA(stackA, stackB, flag);
	ft_sortThree(stackA);
	ft_pushA(stackA, stackB);
	ft_pushA(stackA, stackB);
}