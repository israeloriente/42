/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:15:02 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/27 11:50:37 by israelorien      ###   ########.fr       */
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
		usleep(100);
	}
}

int	parse_int(char *pid)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (pid && pid[i] >= 48 && pid[i] <= 57)
	{
		if (pid[i] <= 47 || pid[i] > 57)
			return (0);
		num = (num * 10) + (pid[i] - 48);
		i++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	char	*pid_str;
	char	*msg;
	int		pid;
	int		i;

	msg = 0;
	i = 0;
	if (!argv[1] || !argv[2])
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
