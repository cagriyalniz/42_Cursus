/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:12:43 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/29 11:09:50 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <math.h>

typedef struct c_client
{
	int	p_id;
	int	*numbers;
}	t_client;

int		*string_intarray(char *c);
int		*ascii_byte(int c);
int		byte_ascii(int *numbers);

void	sig_handler(int signum, siginfo_t *siginfo, void *unused);
void	sig_fback(int signum, siginfo_t *siginfo, void *unused);
void	send_byte(int *byte, int pid);
void	print_byte(int *numbers);
void	idx_end(int *numbers, int *i, siginfo_t *siginfo);

int		ft_iterative_power(int nb, int power);
int		ft_atoi(const char *str);
size_t	ft_strlen(char *str);

void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
