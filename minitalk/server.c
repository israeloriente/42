/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/10/26 12:16:51 by israelorien       #+#    #+#             */
/*   Updated: 2022/11/08 20:03:16 by inunes-o         ###   ########.fr       */
=======
/*   Created: 2022/12/16 16:58:51 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:35:53 by israelorien      ###   ########.fr       */
>>>>>>> 78a2d7d5fc1a69c75d31d412236149bf4b010887
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

<<<<<<< HEAD
static void	receive_data(int signal)
{
	static char	cha;
	static int	i;

	if (i < 8)
	{
		cha = ((signal == SIGUSR1) << i) | cha;
		i++;
	}
	if (i == 8)
	{
		write(1, &cha, 1);
		i = 0;
		cha = 0;
	}
	usleep(25);
=======
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
>>>>>>> 78a2d7d5fc1a69c75d31d412236149bf4b010887
}

int	main(void)
{
<<<<<<< HEAD
	printf("%d\n", getpid());
	signal(SIGUSR1, &receive_data);
	signal(SIGUSR2, &receive_data);
=======
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
>>>>>>> 78a2d7d5fc1a69c75d31d412236149bf4b010887
	while (1)
		pause();
}
