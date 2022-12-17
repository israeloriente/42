/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:43:50 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:29:57 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	a;

	a = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
	return (a);
}
