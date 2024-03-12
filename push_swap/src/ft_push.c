/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:50:43 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 12:55:10 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push(t_stack **src, t_stack **dest)
// {
// 	t_stack	*tmp;
// 	int	i;

// 	if (*src == NULL)
// 		return ;
// 	i = (*src)->value;
// 	tmp = (*src)->next;
// 	if (*dest != NULL)
// 	{
// 		(*dest)->prev = *src;
// 		(*src)->next = *dest;
// 		*dest = *src;
// 	}
// 	else
// 	{
// 		*dest = ft_stacknew(i);
// 		(*dest)->next = NULL;
// 	}
// 	*src = tmp;
// 	ft_set_index(*dest);
// 	ft_set_index(*src);
// }

void	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	tmp = *src;
	*src = (*src)->next;
	ft_stackadd_front(dest, tmp);
	ft_set_index(*dest);
	ft_set_index(*src);
}

void	do_pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	do_pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
