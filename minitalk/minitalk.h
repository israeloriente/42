/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israeloriente <israeloriente@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:34:35 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/27 11:42:00 by israelorien      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		parse_int(char *pid);
char	*ft_itoa(int n);
char	*ft_convert(int n, char *str);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);

#endif
