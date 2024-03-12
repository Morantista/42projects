/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:53:16 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 12:55:26 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_r_rotate(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if ((*stack)->next)
	{
		tmp1 = ft_stacklast(*stack);
		tmp2 = *stack;
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp2->next = NULL;
		ft_stackadd_front(stack, tmp1);
		ft_set_index(*stack);
	}
}

void	do_rra(t_stack **stack_a)
{
	ft_r_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	do_rrb(t_stack **stack_b)
{
	ft_r_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	do_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_r_rotate(stack_a);
	ft_r_rotate(stack_b);
	write(1, "rrr\n", 4);
}
