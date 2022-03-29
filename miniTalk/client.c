/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:12:24 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/29 11:11:18 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
//01010101010101
void	send_byte(int *byte, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (byte[i] == 1)
			kill(pid, SIGUSR2);
		else if (byte[i] == 0)
			kill(pid, SIGUSR1);
		usleep(100);
		i++;
	}
}

void	sig_fback(int signum, siginfo_t *siginfo, void *unused)
{
	(void)unused;
	(void)siginfo;
	//(void)signum;
/* 	printf("sicode %d ", siginfo->si_code);
	printf("sipid %d", siginfo->si_pid);
	printf("sisigno%d", siginfo->si_signo);
	printf("siuid%d", siginfo->si_uid); */
	char *mess;

	mess = "Signal Delivered\n";
	if (signum == SIGUSR2)
		write(1, mess, ft_strlen(mess));
	else
		free(mess);
}

int	main(int argc, char **argv)
{
	int					i;
	int					spid;
	t_client			client;
	struct sigaction	act;

	if (argc != 3)
		return (0);
	spid = ft_atoi(argv[1]);
	client.p_id = spid;
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = sig_fback;
	sigaction(SIGUSR2, &act, NULL);
	ft_putstr_fd("Sending to : ", 1);
	ft_putnbr_fd(spid, 1);
	ft_putchar_fd('\n', 1);
	i = 0;
	while (argv[2][i])
	{
		client.numbers = ascii_byte((unsigned char)argv[2][i]);
		send_byte(client.numbers, spid);
		free(client.numbers);
		i++;
	}
	return (0);
}
