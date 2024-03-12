/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:52:21 by cballet           #+#    #+#             */
/*   Updated: 2024/03/11 14:57:51 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define RARB 1
# define RRARB 2
# define RARRB 3
# define RRARRB 4

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;

}					t_stack;

/*UTILS*/
char				**ft_split(char *str);
bool				ft_atoi(int *result, char *str);
int					ft_max(int x, int y);
int					ft_min(int x, int y);
t_stack				*ft_stacklast(t_stack *stack);
void				ft_stackclear(t_stack **stack);
void				ft_lastclear(t_stack **stack, int argc, char **argv);
t_stack				*ft_stacknew(int value);
void				ft_stackadd_front(t_stack **stack, t_stack *new);
void				ft_stackadd_back(t_stack **stack, t_stack *new);
void				ft_set_index(t_stack *stack);
int					is_digit(char c);
int					is_sign(char c);

/*ERROR*/
void				exit_error(t_stack *stack_a, t_stack *stack_b, char **argv);
void				exit_error2(t_stack *stack_a, t_stack *stack_b);
int					is_number(char *argv);
bool				is_doublon(t_stack *stack, int nbr);
int					is_zero(char *argv);
int					is_not_error(char **argv);

/*COMMANDS*/
void				do_sa(t_stack **stack_a);
void				do_sb(t_stack **stack_b);
void				do_ss(t_stack **stack_a, t_stack **stack_b);
void				do_pa(t_stack **stack_a, t_stack **stack_b);
void				do_pb(t_stack **stack_a, t_stack **stack_b);
void				do_ra(t_stack **stack_a);
void				do_rb(t_stack **stack_b);
void				do_rr(t_stack **stack_a, t_stack **stack_b);
void				do_rra(t_stack **stack_a);
void				do_rrb(t_stack **stack_b);
void				do_rrr(t_stack **stack_a, t_stack **stack_b);

/*COMBOS*/
void				ft_combo_rarb(t_stack **stack_a, t_stack **stack_b,
						int index_a, int index_b);
void				ft_combo_rrarb(t_stack **stack_a, t_stack **stack_b,
						int index_a, int index_b);
void				ft_combo_rarrb(t_stack **stack_a, t_stack **stack_b,
						int index_a, int index_b);
void				ft_combo_rrarrb(t_stack **stack_a, t_stack **stack_b,
						int index_a, int index_b);

/*STACK*/
int					is_not_error(char **argv);

/*FINDS*/
t_stack				*ft_find_min(t_stack *stack);
t_stack				*ft_find_max(t_stack *stack);
int					ft_find_big_brother(t_stack *stack, int nbr);
int					ft_find_best_score(t_stack *stack_a, t_stack *stack_b,
						int index_bigbrother, int index_lilbrother);
int					ft_find_best_combo(int index_big_bro, int ind_lil_bro,
						t_stack *stack_a, t_stack *stack_b);

/*SORT*/
void				ft_make_order(t_stack **stack);
bool				ft_is_sorted(t_stack *stack);
void				ft_sort_three(t_stack **stack_a);

#endif
