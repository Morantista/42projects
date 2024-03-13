/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:44:43 by cballet           #+#    #+#             */
/*   Updated: 2024/03/12 12:08:24 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_combo_rarb(t_stack **stack_a,
		t_stack **stack_b, int ind_a, int ind_b)
{
	while (ind_a > 0 && ind_b > 0)
	{
		do_rr(stack_a, stack_b);
		ind_a--;
		ind_b--;
	}
	while (ind_a > 0)
	{
		do_ra(stack_a);
		ind_a--;
	}
	while (ind_b > 0)
	{
		do_rb(stack_b);
		ind_b--;
	}
	do_pa(stack_a, stack_b);
}

void	ft_combo_rrarb(t_stack **stack_a,
		t_stack **stack_b, int ind_a, int ind_b)
{
	int	size_stack_a;

	size_stack_a = ft_stacklast(*stack_a)->index;
	while (ind_a && ind_a <= size_stack_a)
	{
		do_rra(stack_a);
		ind_a++;
	}
	while (ind_b > 0)
	{
		do_rb(stack_b);
		ind_b--;
	}
	do_pa(stack_a, stack_b);
}

void	ft_combo_rarrb(t_stack **stack_a,
		t_stack **stack_b, int ind_a, int ind_b)
{
	int	size_stack_b;

	size_stack_b = ft_stacklast(*stack_b)->index;
	while (ind_b && ind_b <= size_stack_b)
	{
		do_rrb(stack_b);
		ind_b++;
	}
	while (ind_a > 0)
	{
		do_ra(stack_a);
		ind_a--;
	}
	do_pa(stack_a, stack_b);
}

void	ft_combo_rrarrb(t_stack **stack_a,
		t_stack **stack_b, int ind_a, int ind_b)
{
	int	size_stack_a;
	int	size_stack_b;

	size_stack_a = ft_stacklast(*stack_a)->index;
	size_stack_b = ft_stacklast(*stack_b)->index;
	while (ind_a && ind_a <= size_stack_a && ind_b && ind_b <= size_stack_b)
	{
		do_rrr(stack_a, stack_b);
		ind_a++;
		ind_b++;
	}
	while (ind_a && ind_a <= size_stack_a)
	{
		do_rra(stack_a);
		ind_a++;
	}
	while (ind_b && ind_b <= size_stack_b)
	{
		do_rrb(stack_b);
		ind_b++;
	}
	do_pa(stack_a, stack_b);
}
