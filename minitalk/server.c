/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:16:51 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/27 12:00:36 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// int	ft_isprint(int arg)
// {
// 	return (arg >= 32 && arg < 127);
// }

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
}

int	main(void)
{
	signal(SIGUSR1, &receive_data);
	signal(SIGUSR2, &receive_data);
	printf("%d\n", getpid());
	while (1)
		pause();
	return (0);
}
