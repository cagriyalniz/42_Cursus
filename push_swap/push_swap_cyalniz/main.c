/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:17:48 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 12:11:13 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{	
	if(ac > 1 && ft_arg_check(av))
	{
		
		t_struct *stackA;
		t_struct *stackB;

		stackB = NULL;
		printf("%d\n", ac - 1);
		stackA = ft_lst_fill(av, ac);
		ft_stack_print(stackA);
		printf("\n");
		ft_rotA(&stackA);
		ft_stack_print(stackA);
		ft_swapA(&stackA);
		ft_stack_print(stackA);
		ft_pushB(&stackA, &stackB);
		ft_pushB(&stackA, &stackB);
		ft_rotB(&stackB);
		ft_stack_print(stackA);
		ft_stack_print(stackB);
		ft_pushA(&stackA, &stackB);
		ft_stack_print(stackA);
		ft_stack_print(stackB);
	}
}