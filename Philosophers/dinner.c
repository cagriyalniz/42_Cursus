/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:28:37 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/19 10:20:08 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	finish_dinner(t_philo *philo, t_data *data)
{
	int	fork_id;

	fork_id = 0;
	while (fork_id < data->num_philo)
	{
		pthread_mutex_destroy(&data->fork_lock[fork_id]);
		fork_id++;
	}
	pthread_mutex_destroy(&data->print_lock);
	free(data->fork_lock);
	free(philo);
	return ;
}

void	eat_func(t_philo *philo)
{
	pthread_mutex_lock(&philo->data_of_philo->fork_lock[philo->left_fork]);
	pthread_mutex_lock(&philo->data_of_philo->fork_lock[philo->right_fork]);
	print(philo, "has taken left fork", 'f');
	print(philo, "has taken right fork", 'f');
	print(philo, "is eating", 'e');
	philo->last_meal = get_time();
	ft_wait(philo->data_of_philo->t_eat, philo);
	pthread_mutex_unlock(&philo->data_of_philo->fork_lock[philo->left_fork]);
	pthread_mutex_unlock(&philo->data_of_philo->fork_lock[philo->right_fork]);
	return ;
}

void	*observer(void *ptr)
{
	t_philo	*phi;
	int		phi_id;

	phi = (t_philo *)ptr;
	while (!check_meals(phi))
	{
		phi_id = 0;
		while (phi_id < phi->data_of_philo->num_philo)
		{
			if (get_time() - phi[phi_id].last_meal > phi->data_of_philo->t_die)
			{
				print(&phi[phi_id], "died !!!", 'd');
				phi->data_of_philo->is_died = 1;
				return (NULL);
			}
			phi_id++;
		}
		ft_wait(10, phi);
	}
	return (NULL);
}

void	*loop(void *ptr)
{
	t_philo	*philo;

	philo = (t_philo *)ptr;
	if (philo->philo_id % 2 != 0)
		usleep(1600);
	while (philo->data_of_philo->is_died != 1)
	{
		eat_func(philo);
		print(philo, "is sleeping", 's');
		ft_wait(philo->data_of_philo->t_sleep, philo);
		print(philo, "is thinking", 't');
		usleep(1000);
		philo->p_eat_count++;
	}
	return (NULL);
}

int	start_dinner(t_philo *phi)
{
	int			p_id;
	pthread_t	monitor;

	p_id = -1;
	phi->data_of_philo->start_time = get_time();
	while (++p_id < phi->data_of_philo->num_philo)
	{
		if (pthread_create(&phi[p_id].thread, NULL, &loop, &phi[p_id]) == -1)
			return (-1);
	}
	if (pthread_create(&monitor, NULL, &observer, phi) == -1)
		return (-1);
	p_id = -1;
	while (++p_id < phi->data_of_philo->num_philo)
	{
		pthread_join(phi[p_id].thread, NULL);
	}
	pthread_join(monitor, NULL);
	return (1);
}
