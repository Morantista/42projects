/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:35:36 by cballet           #+#    #+#             */
/*   Updated: 2023/11/22 10:37:31 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		(*f)(i, &str[i]);
		i++;
	}
}
