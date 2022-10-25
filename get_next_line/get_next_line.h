/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:21:37 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/24 12:05:18 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/**
 * @brief Main function 🫡.
 * 
 * @param fd File descriptor.
 * @return char* First line found.
 */
char	*get_next_line(int fd);

/**
 * @brief Return size char from param.
 * 
 * @param str String to get size.
 * @return Qtd counted.
 */
int		str_len(char *str);

/**
 * @brief Checks if string has "/n".
 * 
 * @param str String to compare.
 * @param i Ezequiel idea 🤗🍆 (save space).
 * @return int (Boolean).
 */
int		is_end_line(char *str, int i);

/**
 * @brief Returns the value from the read buffer
 * or aborts when an "/n" is encountered.
 * 
 * @param text Data comming from fd.
 * @param line Line which will be reassigned to itself.
 * @param i Ezequiel idea 🤗🍆 (save space).
 * @param m Ezequiel idea 🤗🍆 (save space).
 * @return char * 
 */
char	*get_line(char *text, char *line, int i, int m);

/**
 * @brief Removes data previously read by the "get_line()" function,
 * if it encounters an "/n" it will stop the removal.
 * 
 * @param text All text passed by fd.
 */
void	clean_buffer(char *text);

#endif
