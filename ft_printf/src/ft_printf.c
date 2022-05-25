/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:35:39 by israelorien       #+#    #+#             */
/*   Updated: 2022/05/25 08:59:52 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str && str[i])
		i++;
	return (write(1, str, i));
}

int	ft_putnumber(int n)
{
	return (1);
}

int	validateType(char *str, int i, va_list *args)
{
	if (str[i] == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (str[i] == 's')
		return (ft_putstr(va_arg(*args, char *)));
	// else if (str[i] == 'p')
		// printf("%p", c);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnumber(va_arg(*args, int));
	// else if (str[i] == 'u')
		// printf("%u", c);
	// else if (str[i] == 'x')
		// printf("%x", c);
	else if (str[i] == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] != '%')
			counter += ft_putchar(string[i]);
		else
		{
			counter += validateType(string, i + 1, &args);
		}
		i++;
	}
	va_end(args);
	return (counter);
}
