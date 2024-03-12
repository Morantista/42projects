/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:04:40 by cballet           #+#    #+#             */
/*   Updated: 2023/12/07 18:50:20 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_hexlow(unsigned int n);
int	ft_print_hexup(unsigned int n);
int	ft_print_percent(void);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_str(char *s);
int	ft_print_uns(unsigned int n);
int	ft_print_int(int n);
int	ft_printf(const char *str, ...);

#endif
