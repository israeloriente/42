/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:51 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:35:53 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*increment_new_data(char new_char, char *client_str)
{
	char	*server_str;
	size_t	len;

	len = 0;
	if (client_str)
		len = ft_strlen(client_str);
	server_str = (char *)malloc(sizeof(char) * (len + 2));
	if (server_str)
	{
		server_str = ft_memcpy(server_str, client_str, len);
		server_str[len] = new_char;
		server_str[len + 1] = '\0';
	}
	free(client_str);
	return (server_str);
}

void	signal_handler(int signum, siginfo_t *pid, void *arg)
{
	static int				i;
	static unsigned char	c;
	static pid_t			client_pid;
	static char				*client_str;

	(void)arg;
	client_pid = pid->si_pid;
	c = ((signum == SIGUSR1) << i) | c;
	i++;
	if (i == 8)
	{
		if (c)
			client_str = increment_new_data(c, client_str);
		else if (client_str)
		{
			ft_printf("%s\n", client_str);
			kill(client_pid, SIGUSR2);
			free(client_pid);
			client_str = NULL;
		}
		i = 0;
		c = 0;
	}
	kill(client_pid, SIGUSR1);
}

int	main(void)
{
	int					pid;
	struct sigaction	sig;

	pid = getpid();
	ft_printf("%s", "SERVER PID: ");
	ft_printf("%d\n", pid);
	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = &signal_handler;
	sigemptyset(&sig.sa_mask);
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
	return (0);
}
