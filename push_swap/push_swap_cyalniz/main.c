/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:17:48 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 10:50:32 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{	
	//int	arr[ac - 1]; arguman olarak sadece "-" gonderince sistem patliyor
	if(ac > 1 && ft_argCheck(av))
	{
		
		t_struct *stackA;
		t_struct *stackB;

		stackB = NULL;
		//printf("%d\n", ac - 1);
		stackA = ft_lst_fill(av, ac);
		ft_stack_index_print(stackA);

		if (ft_isSorted(stackA) == 1)
		{
			printf("sirali");
			ft_lstFree(&stackA);
			return (0);
		}
		
		
		
		ft_mainSort(&stackA, &stackB, ac - 1);
/* 		ft_stack_print(stackA);
		ft_stack_print(stackB);
		if(ft_isSorted(stackA) == 1)
			printf("ok"); */

		
/* 		ft_stack_print(stackA);
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
		ft_stack_print(stackB); */
	}
}
