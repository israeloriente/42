/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:02:51 by rasantos          #+#    #+#             */
/*   Updated: 2022/12/16 17:04:56 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	i = 0;
	while (n != 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}
