/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:33:31 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 23:39:50 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sortFive(t_struct **stackA, t_struct **stackB)
{
	ft_pushSmallA(stackA, stackB);
	ft_pushSmallA(stackA, stackB);
	ft_sortThree(stackA);
	ft_pushA(stackA, stackB);
	ft_pushA(stackA, stackB);
}