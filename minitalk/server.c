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

static void	receive_data(int signal)
{
	char	str[7 + 1];
	char	c;
	int		sig;

	c = 0;
	if (c <= 7)
	{
		if (signal == SIGUSR1)
			sig = 0;
		else
			sig = 1;
		write(1, &sig, 1);
	}
	else
		write(1, &sig, 1);
	printf("Message received: %d\n", sig);
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
