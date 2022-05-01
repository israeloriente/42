/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:52:03 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/15 12:40:55 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Mago ezeq
 * Checks signal direct in function
 */
char	*ft_convert(int n, char *str)
{
	if (n < -9 || n > 9)
		str = ft_convert(n / 10, str);
	n = n % 10;
	if (n < 0)
		n *= -1;
	*str = n + '0';
	str++;
	*str = '\0';
	return (str);
}

/**
 * Convert number into char
*/
char	*ft_itoa(int n)
{	
	char	str[12];

	str[0] = '-';
	ft_convert(n, &(str[n < 0]));
	return (ft_strdup(str));
}

// int main(void)
// {
//     printf("#%s#", ft_itoa(546));
// }
