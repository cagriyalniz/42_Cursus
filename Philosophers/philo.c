/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:28:27 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/19 10:09:40 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_philo	*init_philo(t_data *data)
{
	t_philo	*philo;
	int		p_indx;

	p_indx = 0;
	philo = malloc(sizeof(t_philo) * data->num_philo);
	while (p_indx < data->num_philo)
	{
		philo[p_indx].philo_id = p_indx + 1;
		philo[p_indx].left_fork = p_indx;
		philo[p_indx].right_fork = p_indx + 1;
		philo[p_indx].last_meal = get_time();
		philo[p_indx].p_eat_count = 0;
		philo[p_indx].data_of_philo = data;
		pthread_mutex_init(&data->fork_lock[p_indx], NULL);
		p_indx++;
	}
	philo[0].left_fork = 0;
	return (philo);
}

int	init_data(t_data *data, int ac, char **av)
{
	if (ac < 5 || ac > 6)
	{
		printf("Error: Argument count is wrong!\n");
		return (-1);
	}
	data->num_philo = ft_atoi(av[1]);
	if (data->num_philo == 1)
	{
		printf("Philo 1 died...\n");
		return (-1);
	}
	data->t_die = ft_atoi(av[2]);
	data->t_eat = ft_atoi(av[3]);
	data->t_sleep = ft_atoi(av[4]);
	data->must_eat = 0;
	if (ac == 6)
		data->must_eat = ft_atoi(av[5]);
	data->is_died = 0;
	data->total_meal = 0;
	data->fork_lock = malloc(sizeof(pthread_mutex_t) * data->num_philo);
	pthread_mutex_init(&data->print_lock, NULL);
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;
	t_philo	*philo;
	int		data_check;
	int		arg_check;
	int		thread_check;

	data_check = init_data(&data, ac, av);
	if (data_check == -1)
		return (0);
	arg_check = check_args(&data);
	if (arg_check == -1)
		return (0);
	philo = init_philo(&data);
	thread_check = start_dinner(philo);
	if (thread_check == -1)
		return (0);
	finish_dinner(philo, &data);
	return (0);
}
