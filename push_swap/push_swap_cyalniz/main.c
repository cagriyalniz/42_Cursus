/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:17:48 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/27 16:33:18 by cyalniz          ###   ########.fr       */
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
		stackA = ft_lst_fill(av, ac);
		if (ft_is_sorted(stackA) == 1)
		{
			ft_lst_free(&stackA);
			return (0);
		}
		ft_main_sort(&stackA, &stackB, ac - 1);
	}
}
