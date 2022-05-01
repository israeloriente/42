/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/28 16:13:28 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (ft_strlen(need) > ft_strlen(hay))
		return (0);
	if (!*hay || !*need)
		return ((char *) hay);
	while (hay[h])
	{
		while (hay[h + n] && hay[h + n] == need[n] && len > (h + n))
			n++;
		if (need[n] == '\0')
			return ((char *)hay + h);
		n = 0;
		h++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*hay;
// 	const char	*tack;

// 	hay = "123456789";
// 	tack = "9";
// 	printf("%s \n", ft_strnstr(hay, tack, 8));
// 	printf("%s \n", strnstr(hay, tack, 8));
// }
