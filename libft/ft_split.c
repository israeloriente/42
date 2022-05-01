/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/30 16:38:34 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	preencher_lista(char *str, char c, char	**list, int i_list)
{
	int	len;

	len = 0;
	while (str && (*str == c) && *str)
		str++;
	while (str && str[len] && str[len] != c)
		len++;
	if (len > 0)
	{
		list[i_list] = ft_substr(str, 0, len);
		preencher_lista(str + len, c, list, ++i_list);
	}
}

static int	count_words(char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str && (*str == c) && *str)
		str++;
	count = (str && *str != 0);
	while (str && str[i])
	{
		if ((str[i] == c) && str[i + 1] && (str[i + 1] != c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		size;

	size = count_words((char *)s, c);
	list = malloc(sizeof(char *) * (size + 1));
	if (!list)
		return (0);
	list[size] = NULL;
	preencher_lista((char *)s, c, list, 0);
	return (list);
}
