/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:45:16 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/23 16:05:43 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    ft_mediumSort(t_struct **stackA, t_struct **stackB)
{
    
    long int    max;
    
    max = ft_findMax(*stackA);
    printf("max: %ld\n", max);
    while(ft_isSorted(*stackA) == 0)
    {
        if ((*stackA)->value < max)
        {
            ft_rotA(stackA);
        }
        else if((*stackA)->value >= max)
        {
            ft_pushB(stackA, stackB);
        }
        *stackA = (*stackA)->next;
    }
}