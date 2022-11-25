/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:31:40 by israelorien       #+#    #+#             */
/*   Updated: 2022/11/25 15:46:58 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	buf[10];
	char	res[42000];
	int		i;
	char	destination[42] = "./client ";
	
	i = 0;
	if (argc || !argv)
	{
		read(0, &buf, 10);
		write(1, &buf, 10);
		write(1, &"\n", 1);
		i = fork();
		if (i == 0)
		{
			strcat(destination, buf);
			strcat(destination, " 42_Lisbon");
			system(destination);
			read(0, &res, 42000);
			printf("Server received: %s", res);
		}
	}
	return (0);
}
