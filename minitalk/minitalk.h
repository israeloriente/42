/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:48:52 by israelorien       #+#    #+#             */
/*   Updated: 2022/12/17 15:35:00 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./lib/ft_printf/ft_printf.h"
# include "./lib/libft/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * Idea copied from https://github.com/IDC87/minitalk that helped me make the 
 * project more efficient by making the signal changes to sigaction.
 */

// @@@@@@@@@@ Server @@@@@@@@@@
/**
 * @brief Dispatches the signal to the correct function
 * @param signum Siganl received (SIGUSR1 or SIGUSR2).
 * @param pid Info about the client.
 * @param arg fait rien.
 */
void	signal_handler(int signum, siginfo_t *pid, void *arg);
/**
 * @brief Increments the new data received from the client.
 * @param new_char New char received.
 * @param client_str String with the data received.
 * @return char* New string with the new data.
 */
char	*increment_new_data(char new_char, char *client_str);
// @@@@@@@@@@ Client @@@@@@@@@@
/**
 * @brief Function that receive the signal SIGUSR2 when the 
 * string message arrive with success.
 * @param signum SIGUSR1 or SIGUSR2.
 */
void	bit_confirm(int signum);
/**
 * @brief Sends the bit to the server.
 * @param pid PID of the server.
 * @param byte Byte to send (8 bits).
 */
void	ft_sendbit(int pid, char byte);
#endif
