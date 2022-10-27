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

void	mandar(char c)
{
	printf("%c", c);
	// printf("%i\n", (c >> 5) & 1);
	// printf("%i\n", (c >> 4) & 1);
	// printf("%i\n", (c >> 3) & 1);
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

// printf("PID is: %s\n", pid);
// printf("Message is: %s\n", msg);
int	main(int argc, char *argv[])
{
	char	*pid;
	char	*msg;
	int		i;
	int		m;

	msg = 0;
	if (!argv[1] || !argv[2])
		return (0);
	pid = argv[1];
	msg = argv[2];
	i = parse_int(pid);
	if (i)
	{
		kill(i, SIGUSR1);
		kill(i, SIGUSR2);
	}
	else
		printf("Invalid PID\n");
	mandar(msg[0]);
	// while (msg[m])
	// {
	// 	mandar(msg[m]);
	// 	m++;
	// }
}
