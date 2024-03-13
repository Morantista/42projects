/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:57:58 by cballet           #+#    #+#             */
/*   Updated: 2024/03/12 14:11:12 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_find_best_node(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*node_b;
	int		best_score;

	node_b = stack_b;
	best_score = ft_find_best_score(stack_a, stack_b,
			ft_find_big_brother(stack_a, node_b->value), node_b->index);
	while (stack_b)
	{
		if (best_score >= ft_find_best_score(stack_a, stack_b,
				ft_find_big_brother(stack_a, stack_b->value), stack_b->index))
		{
			best_score = ft_find_best_score(stack_a, stack_b,
					ft_find_big_brother(stack_a, stack_b->value),
					stack_b->index);
			node_b = stack_b;
		}
		stack_b = stack_b->next;
	}
	return (node_b);
}

void	ft_make_best_combo(t_stack **stack_a, t_stack **stack_b)
{
	int	ind_lil_bro;
	int	ind_big_bro;
	int	best_combo;

	ind_lil_bro = ft_find_best_node(*stack_a, *stack_b)->index;
	ind_big_bro = ft_find_big_brother(*stack_a, ft_find_best_node(*stack_a,
				*stack_b)->value);
	best_combo = ft_find_best_combo(ind_big_bro, ind_lil_bro, *stack_a,
			*stack_b);
	if (best_combo == RARB)
		ft_combo_rarb(stack_a, stack_b, ind_big_bro, ind_lil_bro);
	else if (best_combo == RRARRB)
		ft_combo_rrarrb(stack_a, stack_b, ind_big_bro, ind_lil_bro);
	else if (best_combo == RRARB)
		ft_combo_rrarb(stack_a, stack_b, ind_big_bro, ind_lil_bro);
	else
		ft_combo_rarrb(stack_a, stack_b, ind_big_bro, ind_lil_bro);
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	if (!*stack_a)
		return ;
	i = ft_stacklast(*stack_a)->index;
	if (!ft_is_sorted(*stack_a))
	{
		while (i > 2)
		{
			do_pb(stack_a, stack_b);
			i--;
		}
		if (!ft_is_sorted(*stack_a))
			ft_sort_three(stack_a);
		if (*stack_b)
		{
			i = ft_stacklast(*stack_b)->index;
			while (i >= 0)
			{
				ft_make_best_combo(stack_a, stack_b);
				i--;
			}
		}
	}
	ft_make_order(stack_a);
}

void	print_stack(t_stack *node)
{
	while (node != NULL)
	{
		printf("%d\n", node->value);
		node = node->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*new;
	int		nbr;
	int		i;

	i = 0;
	nbr = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		argv = ft_split(argv[1]);
	while (argv[++i])
	{
		if (!ft_atoi(&nbr, argv[i]))
			exit_error(stack_a, stack_b, argv, argc);
		if (!is_not_error(argv) || (is_doublon(stack_a, nbr) == true))
			exit_error(stack_a, stack_b, argv, argc);
		new = ft_stacknew(nbr);
		ft_stackadd_back(&stack_a, new);
	}
	ft_set_index(stack_a);
	ft_sort(&stack_a, &stack_b);
	ft_lastclear(&stack_a, argc, argv);
}
