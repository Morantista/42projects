/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:54:04 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 16:25:31 by cballet          ###   ########.fr       */
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

void	exit_error(t_stack *stack_a, t_stack *stack_b, char **argv)
{
	int	i;
	printf("exit_error1\n");
	if (stack_a != NULL)
		ft_stackclear(&stack_a);

	if (stack_b != NULL)
		ft_stackclear(&stack_b);
	i = 1;
	while(argv[i])
	{
		free(argv[i]);
		i++;
	}
	free (argv);
	exit (1);
}

void	exit_error2(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a != NULL)
		ft_stackclear(&stack_a);
	if (stack_b != NULL)
		ft_stackclear(&stack_b);

	write (2, "Error\n", 6);
	exit (1);
}
