/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:17:48 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/28 16:57:56 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	t_struct	*stack_a;
	t_struct	*stack_b;

	if (ac > 1 && ft_arg_check(av))
	{
		stack_b = NULL;
		stack_a = ft_lst_fill(av, ac);
		if (ft_is_sorted(stack_a) == 1)
		{
			ft_lst_free(&stack_a);
			return (0);
		}
		ft_main_sort(&stack_a, &stack_b, ac - 1);
	}
}
