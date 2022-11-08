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
}

int	main(void)
{
	printf("%d\n", getpid());
	signal(SIGUSR1, &receive_data);
	signal(SIGUSR2, &receive_data);
	while (1)
		pause();
}
