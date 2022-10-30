/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:16:51 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/30 17:32:11 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// int	ft_isprint(int arg)
// {
// 	return (arg >= 32 && arg < 127);
// }

static void	receive_data(int signal, siginfo_t *data, void *nao_sei)
{
	int	pid;

	pid = data->si_pid;
	printf("%d\n", signal);
	printf("%d\n", pid);
	// static char	cha;
	// static int	i;
	// if (i < 8)
	// {
	// 	cha = ((signal == SIGUSR1) << i) | cha;
	// 	i++;
	// }
	// if (i == 8)
	// {
	// 	write(1, &cha, 1);
	// 	i = 0;
	// 	cha = 0;
	// }
}

int	main(void)
{
	struct sigaction	sig_action;

	printf("%d\n", getpid());
	sig_action.sa_sigaction = receive_data;
	sigaction(SIGUSR1, &sig_action, NULL);
	sigaction(SIGUSR2, &sig_action, NULL);
	// signal(SIGUSR1, &receive_data);
	// signal(SIGUSR2, &receive_data);
	while (1)
		pause();
	return (0);
}
