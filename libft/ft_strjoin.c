/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/28 20:16:36 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Andamos a string com até "start", fazemos a alocação e retornamos
 * a subString até o len.
 * @param s1 The prefix string.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return char* - 
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	if (!(s1 && s2))
		return (NULL);
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1 && s1[i1])
	{
		new[i1] = s1[i1];
		i1++;
	}
	while (s2 && s2[i2])
	{
		new[i1] = s2[i2];
		i2++;
		i1++;
	}
	new[i1] = '\0';
	return (new);
}

// int main() {

// 	printf("%s", ft_strjoin("teste ", "udufjf"));
// }
