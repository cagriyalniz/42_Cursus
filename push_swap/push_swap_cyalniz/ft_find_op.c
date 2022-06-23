/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:49:50 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/23 16:29:14 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

long int    ft_findMax(t_struct *stackA)
{
    long int    max;
    
    max = -2147483648;
    while (stackA)
    {
        if (stackA->value > max)
            max = stackA->value;
        stackA = stackA->next;
    }
    return max;
}

long int    ft_findMin(t_struct *stackA)
{
    long int    min;
    
    min = 2147483647;
    while(stackA)
    {
        if (stackA->value < min)
            min = stackA->value;
        stackA = stackA->next;
    }
    return min;
}

static t_struct *get_next_min(t_struct **stackA)
{
    t_struct    *head;
    t_struct    *min;
    int         flag;
    
    head = *stack;
    flag = 0;
}