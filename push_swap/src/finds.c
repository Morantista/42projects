/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finds.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:10:02 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 12:29:55 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_find_min(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	while (stack)
	{
		if (stack->value < min->value)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_stack	*ft_find_max(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	while (stack)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

int	ft_find_big_brother(t_stack *stack, int nbr)
{
	int	big_bro;
	int	index;

	if (nbr > ft_find_max(stack)->value)
		return (ft_find_min(stack)->index);
	big_bro = INT_MAX;
	index = 0;
	while (stack)
	{
		if (stack->value > nbr && stack->value <= big_bro)
		{
			index = stack->index;
			big_bro = stack->value;
		}
		stack = stack->next;
	}
	return (index);
}

int	ft_find_best_score(t_stack *stack_a, t_stack *stack_b, int ind_big_bro,
		int ind_lil_bro)
{
	int	rarb;
	int	rrarrb;
	int	rarrb;
	int	rrarb;
	int	min;

	rarb = ft_max(ind_big_bro, ind_lil_bro);
	rrarrb = ft_max(ft_stacklast(stack_a)->index - ind_big_bro,
			ft_stacklast(stack_b)->index - ind_lil_bro) + 1;
	rarrb = ind_big_bro + ft_stacklast(stack_b)->index - ind_lil_bro + 1;
	rrarb = ind_lil_bro + ft_stacklast(stack_a)->index - ind_big_bro + 1;
	min = ft_min(ft_min(rarb, rrarrb), ft_min(rarrb, rrarb));
	return (min);
}

int	ft_find_best_combo(int ind_big_bro, int ind_lil_bro, t_stack *stack_a,
		t_stack *stack_b)
{
	int	rarb;
	int	rrarrb;
	int	rarrb;
	int	rrarb;

	rarb = ft_max(ind_big_bro, ind_lil_bro);
	rrarrb = ft_max(ft_stacklast(stack_a)->index - ind_big_bro,
			ft_stacklast(stack_b)->index - ind_lil_bro) + 1;
	rarrb = ind_big_bro + ft_stacklast(stack_b)->index - ind_lil_bro + 1;
	rrarb = ind_lil_bro + ft_stacklast(stack_a)->index - ind_big_bro + 1;
	if (rarb <= rrarb && rarb <= rrarrb && rarb <= rarrb)
		return (RARB);
	if (rrarrb <= rarb && rrarrb <= rrarb && rrarrb <= rarrb)
		return (RRARRB);
	if (rarrb <= rarb && rarrb <= rrarrb && rarrb <= rrarb)
		return (RARRB);
	return (RRARB);
}
