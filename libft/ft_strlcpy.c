/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:36:50 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/30 22:58:33 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t count)
{
	size_t	i;
	char	*ptr_dst;
	char	*ptr_src;

	if (count == 0)
		return (ft_strlen(src));
	ptr_dst = (char *) dst;
	ptr_src = (char *) src;
	i = 0;
	while (i < count - 1 && ptr_src[i])
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	if (dst != 0)
		ptr_dst[i] = '\0';
	return (ft_strlen(src));
}
