/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:18:33 by cballet           #+#    #+#             */
/*   Updated: 2024/03/12 12:16:17 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_sorted(t_stack *stack)
{
	int	max;
	int	min;

	if (!stack)
		return (true);
	max = ft_find_max(stack)->value;
	min = ft_find_min(stack)->value;
	while (stack->next)
	{
		if (stack->value == max)
		{
			if (stack->next->value != min)
				return (false);
		}
		else if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	ft_make_order(t_stack **stack)
{
	int	ind_min;
	int	size;

	if (!*stack)
		return ;
	ind_min = ft_find_min(*stack)->index;
	size = ft_stacklast(*stack)->index;
	if (ind_min <= size / 2)
	{
		while (ind_min > 0)
		{
			do_ra(stack);
			ind_min--;
		}
	}
	else
	{
		while (ind_min <= size)
		{
			do_rra(stack);
			ind_min++;
		}
	}
}

void	ft_sort_three(t_stack **stack_a)
{
	t_stack	*biggest_node;

	biggest_node = ft_find_max(*stack_a);
	if (biggest_node == *stack_a)
		do_ra(stack_a);
	else if ((*stack_a)->next == biggest_node)
		do_rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		do_sa(stack_a);
}

void	ft_set_index(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}
