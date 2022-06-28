/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:28:42 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 13:01:18 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sourtFour(t_struct **stackA, t_struct **stackB)
{
	int flag = 0;
	ft_pushSmallA(stackA, stackB, flag);
	ft_sortThree(stackA);
	ft_pushA(stackA, stackB);
}
