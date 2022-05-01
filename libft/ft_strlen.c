/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:42:27 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/26 19:32:25 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	index;

	index = 0;
	while (*str++)
		index++;
	return (index);
}

/*
int	main()
{
	char *a = "";

	printf("%lu\n", strlen(a));
	printf("%", ft_strlen(a));
}
*/
