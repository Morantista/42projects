/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:54:04 by cballet           #+#    #+#             */
/*   Updated: 2024/03/13 13:47:01 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

void	exit_error(t_stack *stack_a, t_stack *stack_b, char **argv, int argc)
{
	int	i;

	if (stack_a != NULL)
		ft_stackclear(&stack_a);
	if (stack_b != NULL)
		ft_stackclear(&stack_b);
	i = 1;
	if (argc == 2)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
	write(2, "Error\n", 6);
	exit(1);
}

void	exit_error2(t_stack *new)
{
	free(new);
	write(2, "Error\n", 6);
	exit(1);
}
