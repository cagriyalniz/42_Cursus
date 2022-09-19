/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:30:04 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/19 10:10:08 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>

typedef struct s_data
{
	int				num_philo;
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				must_eat;
	int				total_meal;
	long			start_time;
	int				is_died;
	pthread_mutex_t	print_lock;
	pthread_mutex_t	*fork_lock;
}	t_data;

typedef struct s_philo
{
	pthread_t	thread;
	t_data		*data_of_philo;
	int			philo_id;
	int			p_eat_count;
	long		last_meal;
	int			left_fork;
	int			right_fork;
}	t_philo;

//init
int		init_data(t_data *data, int ac, char **av);
t_philo	*init_philo(t_data *data);
//utils
int		check_args(t_data *data);
void	print(t_philo *philo, char *state, char c);
long	get_time(void);
int		check_meals(t_philo *philo);
int		ft_atoi(char *ptr);
//dinner
void	finish_dinner(t_philo *philo, t_data *data);
void	eat_func(t_philo *philo);
void	*loop(void *ptr);
void	*observer(void *ptr);
int		start_dinner(t_philo *philo);
void	ft_wait(long long time, t_philo *sim);

#endif