/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/27 23:04:53 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	t;
	size_t			i;

	t = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == t)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == t)
		return ((char *) s + i);
	return (NULL);
}

// int main() {
// 	ft_putendl_fd("OLA", 1);
// }
