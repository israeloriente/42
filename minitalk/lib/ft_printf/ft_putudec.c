/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:39:27 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:30:06 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_counter(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	ft_free(char *s)
{
	free (s);
	s = NULL;
}

int	ft_putudec(unsigned int n)
{
	char			*s;
	int				len;
	unsigned int	nb;

	nb = n;
	if (nb == 0)
		return (ft_putchar('0'));
	len = ft_counter(nb);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (0);
	s[len--] = '\0';
	while (nb != 0)
	{
		s[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	len = ft_putstr(s);
	ft_free(s);
	return (len);
}
