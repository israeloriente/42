/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:53:14 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/24 12:04:17 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

int	is_end_line(char *str, int i)
{
	while (str && str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_line(char *text, char *line, int i, int m)
{
	char	*new_line;

	new_line = malloc((str_len(line) + str_len(text) + 1) * sizeof(char));
	if (!new_line)
		return (0);
	while (line && line[i] != '\0')
	{
		new_line[i] = line[i];
		i++;
	}
	while (text[m] != '\0')
	{
		new_line[i++] = text[m];
		if (text[m] == '\n')
			break ;
		m++;
	}
	new_line[i] = '\0';
	free(line);
	return (new_line);
}

void	clean_buffer(char *text)
{
	int	i;
	int	f;

	i = 0;
	f = -1;
	while (text[i] != 0)
	{
		if (f != -1)
			text[f++] = text[i];
		if (text[i] == '\n' && f == -1)
			f++;
		text[i++] = 0;
	}
}
