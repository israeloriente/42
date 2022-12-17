/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:13 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:30:35 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/**
 * @brief Counts the number of characters in a string
 * @param srt String to count
 * @return size_t 
 */
size_t	ft_strlen(const char *srt);
/**
 * @brief Converts a string to an integer
 * @param str String to convert
 * @return int
 */
int		ft_atoi(const char *str);
/**
 * @brief Copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined. Applications in which dst
 * and src might overlap should use memmove(3) instead.
 * @param dst Destino
 * @param src Origem
 * @param n Quantidade de bytes
 * @return void* 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
