/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:43:50 by rasantos          #+#    #+#             */
/*   Updated: 2022/12/16 17:04:24 by israelorien      ###   ########.fr       */
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
