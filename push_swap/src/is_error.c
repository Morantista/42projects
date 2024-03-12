/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:40:37 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 12:30:32 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] && !is_digit(argv[i]))
		return (0);
	return (1);
}

bool	is_doublon(t_stack *stack, int nbr)
{
	while (stack)
	{
		if (stack->value == nbr)
			return (true);
		stack = stack->next;
	}
	return (false);
}

int	is_zero(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]))
		i++;
	while (argv[i] && argv[i] == 0)
		i++;
	if (argv[i])
		return (0);
	return (1);
}

int	is_not_error(char **argv)
{
	int	i;
	int	zero;

	zero = 0;
	i = 1;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			return (0);
		zero += is_zero(argv[i]);
		i++;
	}
	if (zero > 1)
		return (0);
	return (1);
}
