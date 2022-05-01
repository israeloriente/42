/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/29 00:10:02 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * 
 * @param s The string on which to iterate.
 * @param f  The function to apply to each character.
 * @return char* 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*new;
	unsigned int		i;

	if (!s)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}

// int main() {
// // 	ft_putendl_fd("OLA", 1);
//  }
