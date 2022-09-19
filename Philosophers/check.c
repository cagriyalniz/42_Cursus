/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:28:54 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/19 10:25:34 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_args(t_data *data)
{
	if (data->num_philo < 1 || data->t_die < 1
		|| data->t_eat < 1 || data->t_sleep < 1)
	{
		printf("Error: Arguments problem, arguments cannot less than 1\n");
		return (-1);
	}
	return (1);
}

int	check_meals(t_philo *philo)
{
	int	ph_id;

	ph_id = 0;
	if (philo->data_of_philo->must_eat > 0)
	{
		while (ph_id < philo->data_of_philo->num_philo)
		{
			if (philo[ph_id].p_eat_count == philo->data_of_philo->must_eat)
				philo->data_of_philo->total_meal++;
			ph_id++;
		}
		if (philo->data_of_philo->total_meal >= philo->data_of_philo->num_philo)
		{
			philo->data_of_philo->is_died = 1;
			return (1);
		}
	}
	return (0);
}
