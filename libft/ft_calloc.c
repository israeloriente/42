/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/27 21:11:47 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*nome;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	nome = malloc(count * size);
	if (!nome)
		return (NULL);
	ft_bzero(nome, count * size);
	return (nome);
}

// int main() {
// 	ft_putendl_fd("OLA", 1);
// }
