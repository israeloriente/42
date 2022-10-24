/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:16:25 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/24 12:05:26 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	text[BUFFER_SIZE + 1];
	char		*line;

	if (read(fd, 0, 0) < 0 && BUFFER_SIZE > 0)
		return (0);
	line = 0;
	while (text[0] || read(fd, text, BUFFER_SIZE))
	{
		line = get_line(text, line, 0, 0);
		clean_buffer(text);
		if (is_end_line(line, 0))
			break ;
	}
	return (line);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("text.txt", O_RDONLY);
// 	printf("%s", get_next_line(fd));
// }
