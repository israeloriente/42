/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/27 23:09:26 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	t;
	int		i;

	t = (char) c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == t)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}

// int main() {
// 	ft_putendl_fd("OLA", 1);
// }
