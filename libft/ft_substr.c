/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/28 19:58:21 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;

	s_len = ft_strlen(s);
	size = 0;
	if (start > s_len)
	{
		size = 1;
	}
	else if (start + len > s_len)
	{
		size = s_len - start + 1;
	}
	else
	{
		size = len + 1;
	}
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (s == 0)
		return (0);
	substr = malloc((check(s, start, len)) * sizeof(char));
	i = 0;
	if (substr == 0)
		return (0);
	while ((len--) && (s[start + i] != '\0') && ((start + i) < ft_strlen(s)))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* Aqui eu explico */
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub;
// 	size_t	size;

// 	if (!s)
// 		return (NULL);
// 	while (s && *s && start--)
// 		s++;
// 	size = ft_strlen(s);
// 	if (len > size)
// 		len = size;
// 	sub = malloc(len + 1);
// 	if (!sub || len < 1)
// 		return (NULL);
// 	sub = ft_memcpy(sub, s, len);
// 	sub[len] = '\0';
// 	return (sub);
// }

// int main() {
// 	char	*string;

// 	string = "OLA";
// 	printf("%s", ft_substr("OLA", 50, 2));
// }
