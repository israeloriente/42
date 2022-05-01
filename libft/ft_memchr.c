/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/27 22:44:27 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	t;
	size_t			i;

	str = (unsigned char *) s;
	t = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == t)
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main() {
// 	ft_putendl_fd("OLA", 1);
// }
