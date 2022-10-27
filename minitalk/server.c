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

void	teste(int sig)
{
	char	c;
	int		i;

	if (sig == SIGUSR1)
	c = 0;
	printf("Message received: %d\n", sig);
}

int	main(void)
{
	// struct sigaction	sig_action;
	// sig_action.sa_sigaction = teste;
	// sigaction(SIGUSR1, &teste, NULL);
	// sigaction(SIGUSR2, &sig_action, NULL);
	signal(SIGUSR1, &teste);
	signal(SIGUSR2, &teste);
	printf("%d\n", getpid());
	while (1)
		pause();
	return (0);
}
