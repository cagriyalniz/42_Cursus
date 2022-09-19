/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:28:46 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/19 10:22:56 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;
	int	sign;

	nbr = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
			nbr = (nbr * 10) + (str[i++] - '0');
	}
	return (nbr * sign);
}

void	print(t_philo *philo, char *state, char c)
{
	long	current_time;

	current_time = get_time() - philo->data_of_philo->start_time;
	pthread_mutex_lock(&philo->data_of_philo->print_lock);
	if (!philo->data_of_philo->is_died)
	{
		if (c == 'e')
		{
			printf("\033[1;31m");
			printf("%3ld %3d %s\n", current_time, philo->philo_id, state);
			printf("\033[0m");
		}
		else if (c == 'd')
		{
			printf("\033[0;36m");
			printf("%3ld %3d %s\n", current_time, philo->philo_id, state);
			printf("\033[0m");
		}
		else
			printf("%3ld %3d %s\n", current_time, philo->philo_id, state);
	}
	pthread_mutex_unlock(&philo->data_of_philo->print_lock);
}

void	ft_wait(long long time, t_philo *sim)
{
	long long	t;

	t = get_time();
	while (!(sim->data_of_philo->is_died))
	{
		usleep(32);
		if (get_time() - t >= time)
			break ;
	}
}
