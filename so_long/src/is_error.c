/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:30:03 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 11:30:36 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"


void *print_error(char *str, t_game *game)
{
	write(2, str, ft_strlen(str));
	if (game)
		free_malloc(game->map);
	free(game);
	exit (1);
}
void *print_error2(char *str, t_game *game)
{
	write(2, str, ft_strlen(str));
	free(game);
	exit (1);
}

char	*free_malloc(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}



