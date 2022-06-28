/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:03:40 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/28 17:07:36 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_smallSort(t_struct **stackA, t_struct **stackB, int ac)
{
	(void)stackB;
	if (ac == 2)
	{
		if ((*stackA)->value > (*stackA)->next->value)
			ft_swap_a(stackA);    
	}
	else if (ac == 3)
		ft_sort_three(stackA);
	else if (ac == 4)
		ft_sourt_four(stackA, stackB);
	else if (ac == 5)
		ft_sort_five(stackA, stackB);
}

static int	get_max_bits(t_struct *stack)
{
	t_struct	*tmp;
	int			max;
	int			max_bits;

	tmp = stack;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radixSort(t_struct **stackA, t_struct **stackB)
{
	t_struct	*tmp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	tmp = *stackA;
	size = ft_lstsize(tmp);
	max_bits = get_max_bits(*stackA);
	while (i < max_bits && !ft_is_sorted(*stackA))
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *stackA;
			if (((tmp->index >> i) & 1) == 1)
				ft_rot_a(stackA);
			else
				ft_push_b(stackA, stackB);
		}
		while (ft_lstsize(*stackB) != 0)
			ft_push_a(stackA, stackB);
		i++;
	}
}

void	ft_main_sort(t_struct **stackA, t_struct **stackB, int ac)
{
	if (ac <= 5)
		ft_smallSort(stackA, stackB, ac);
	else
		ft_radixSort(stackA, stackB);
}

