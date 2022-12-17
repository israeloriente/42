/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:41 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:35:19 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_confirm(int signum)
{
	if (signum == SIGUSR2)
	{
		ft_printf("\nBytes received ✅\n");
		exit(0);
	}
}

void	ft_sendbit(int pid, char byte)
{
	int	c;

	c = 0;
	while (c < 8)
	{
		if (byte & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		byte = (byte >> 1);
		c++;
		usleep(500);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;
	char	*client_msg;

	if (argc != 3)
		return (ft_printf("Error: Wrong number of arguments\n"));
	pid = ft_atoi(argv[1]);
	if (kill(pid, 0) < 0)
		return (ft_printf("Error: Invalid PID\n"));
	client_msg = argv[2];
	i = 0;
	signal(SIGUSR1, &bit_confirm);
	signal(SIGUSR2, &bit_confirm);
	while (client_msg && 1)
	{
		ft_sendbit(pid, client_msg[i]);
		if (!client_msg[i++])
			break ;
	}
	while (1)
		pause();
	return (0);
}
