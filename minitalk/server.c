/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:16:51 by israelorien       #+#    #+#             */
/*   Updated: 2022/11/08 20:03:16 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	receive_data(int signum, siginfo_t *info, void *context)
{
	static char	cha;
	static int	i;
	
	write(1, &signum, 1);
	// if (info->si_pid)
	// 	kill(info->si_pid, SIGUSR1);
	printf("%d", signum);
	(void)signum;
	(void)info;
	(void)context;
	if (i < 8)
	{
		cha = ((signum == SIGUSR1) << i) | cha;
		i++;
	}
	if (i == 8)
	{
		write(1, &cha, 1);
		i = 0;
		cha = 0;
	}
	usleep(250);
}

int	main(void)
{
	struct sigaction	sig_action;
	char				*pid;

	sig_action.sa_sigaction = receive_data;
	sigaction(SIGUSR1, &sig_action, NULL);
	sigaction(SIGUSR2, &sig_action, NULL);
	int teste = getpid();
	pid = ft_itoa(teste);
	write(1, pid, ft_strlen(pid));
	while (1)
		pause();
	return (0);
}
