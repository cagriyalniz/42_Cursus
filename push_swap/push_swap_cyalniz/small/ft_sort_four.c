/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:28:42 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 23:36:40 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sourtFour(t_struct **stackA, t_struct **stackB)
{
	ft_pushSmallA(stackA, stackB);
	ft_sortThree(stackA);
	ft_pushA(stackA, stackB);
}