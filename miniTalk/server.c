/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:12:21 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/29 12:49:15 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	idx_end(int *numbers, int *i, siginfo_t *siginfo)
{
	if (*i == 8)
	{
		kill(siginfo->si_pid, SIGUSR2);
		print_byte(numbers);
		*i = 0;
	}
}

void	print_byte(int *numbers)
{
	int	ascii;

	ascii = byte_ascii(numbers);
	ft_putchar_fd(ascii, 1);
}

void	sig_handler(int signum, siginfo_t *siginfo, void *unused)
{
	static int	idx = 0;
	static int	count[8];

	(void)unused;
	if (signum == SIGUSR2)
	{
		count[idx++] = 1;
		idx_end(count, &idx, siginfo);
	}
	else if (signum == SIGUSR1)
	{
		count[idx++] = 0;
		idx_end(count, &idx, siginfo);
	}
/*  
	pid_t sender_pid = siginfo->si_pid;
	int int_count = 0;
    if(signum == SIGINT) {
        int_count++;
        printf("INT(%d), from [%d]\n", int_count, (int)sender_pid);
        return;
    } else{
        printf("Quit, bye, from [%d]\n", (int)sender_pid);
        exit(0);
    }  */
}

int	main(void)
{
	struct sigaction	act;
	/*
struct  sigaction {
	union __sigaction_u __sigaction_u;   signal handler 
	sigset_t sa_mask;                signal mask to apply 
	int     sa_flags;                see signal options below 
};
	*/
	int	p_id;

	p_id = getpid();
	bzero(&act, sizeof(act));
	act.sa_flags = SA_SIGINFO;
	//SA_SIGINFO bayrağı
	//sa_sigaction alanına atanan signal 
	//handler'ın 3 parametre ile 
	//çağrılmasını sağlar.
	act.sa_sigaction = sig_handler;
	if(sigaction(SIGUSR1, &act, NULL) == -1)
		ft_putstr_fd("sinyal gelmedi", 1);
	if(sigaction(SIGUSR2, &act, NULL) == -1)
		ft_putstr_fd("sinyal gelmedi", 1);
	/*
	int	sigaction(int, const struct sigaction * __restrict,
	    struct sigaction * __restrict);
	*/
//Bir sigaction(), belirli bir sinyalle ilişkili belirli bir eylemi,
// çağırmaya/gözlemlemeye veya incelemeye izin veren bir işlevdir.
	ft_putnbr_fd(p_id, 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		pause();
	}
	return (0);
}
