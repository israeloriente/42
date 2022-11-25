/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:15:02 by israelorien       #+#    #+#             */
/*   Updated: 2022/11/08 20:03:19 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	mandar(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c >> i++) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
	}
}

// void	confirmed(int signum, siginfo_t *info, void *context)
// {
// 	(void)info;
// 	(void)context;
// 	printf("%d\n", signum);
// }

int	main(int argc, char *argv[])
{
	char				*pid_str;
	char				*msg;
	int					pid;
	int					i;
	// struct sigaction	sig_action;

	// sig_action.sa_sigaction = confirmed;
	// sigaction(SIGUSR1, &sig_action, NULL);
	msg = 0;
	i = 0;
	if ((!argv[1] || !argv[2]) && argc > 1)
		return (0);
	pid_str = argv[1];
	msg = argv[2];
	pid = parse_int(pid_str);
	if (pid)
		while (msg[i])
			mandar(pid, msg[i++]);
	else
		printf("Invalid PID\n");
}
