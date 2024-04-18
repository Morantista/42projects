/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:19:22 by cballet           #+#    #+#             */
/*   Updated: 2024/04/03 12:01:06 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_argv(int argc, char **argv, t_game *game)
{
	if (argc > 2)
		print_error2("Error\nToo many arguments!\n", game);
	if (argc < 2)
		print_error2("Error\nToo few arguments!\n", game);
	if (argc == 2 && ft_strchr2(argv[1],".ber") == 0)
		print_error2("Error\nInvalid file!\n", game);
	return (1);
}
