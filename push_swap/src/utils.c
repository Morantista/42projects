/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:24:57 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 16:26:01 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int x, int y)
{
	if (x < y)
		return (x);
	return (y);
}

int	ft_max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}

void	ft_free(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

bool	ft_atoi(int *result, char *str)
{
	int	sign;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
		if (!*str)
			return (false);
	}
	*result = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (*result > *result * 10 - 48 + *str && !(*result == INT_MAX / 10
				&& *str == '8' && !str[1] && sign < 0))
			return (false);
		*result = *result * 10 - 48 + *str;
		str++;
	}
	if (*str)
		return (false);
	return (*result *= sign, true);
}

void	ft_lastclear(t_stack **stack, int argc, char **argv)
{
	t_stack	*tmp;
	int	i;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
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
	*stack = NULL;
}


