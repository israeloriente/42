/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:33:27 by israelorien       #+#    #+#             */
/*   Updated: 2022/10/21 19:54:30 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_main.h>

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("Deu certo");

	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Hello world!");
	mlx_loop(mlx);
}
