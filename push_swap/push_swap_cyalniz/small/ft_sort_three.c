/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:54:51 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 18:10:33 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_otherThree(t_struct **stackA, int *nums)
{
	if (nums[0] > nums[1] && nums[1] > nums[2])
	{
		ft_rotA(stackA);
		ft_swapA(stackA);
	}
	else if(nums[0] < nums[1] && nums[1] > nums[2]
	&& nums[0] < nums[2])
	{
		ft_swapA(stackA);
		ft_rotA(stackA);
	}
}

void	ft_sortThree(t_struct **stackA)
{
	t_struct	*head;
	int			nums[3];
	int			i;

	i = 0;
	head = *stackA;
	while (head != 0)
	{
		nums[i] = head->value;
		head = head->next;
		i++;
	}
	if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] < nums[2])
		ft_swapA(stackA);
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] > nums[2])
		ft_revRotA(stackA);
	else if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] > nums[2])
		ft_rotA(stackA);
	else
		ft_otherThree(stackA, nums);
	
}