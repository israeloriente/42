/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/26 20:05:44 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(int n, char *str)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];

	str[0] = '-';
	ft_convert(n, &(str[n < 0]));
	write(fd, str, ft_strlen(str));
}

// int	main() {
// 	ft_putnbr_fd(48, 1);
// }
