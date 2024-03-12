/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:25:10 by cballet           #+#    #+#             */
/*   Updated: 2024/02/07 09:27:37 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_FOREACH_H
#define FT_LIST_FOREACH_H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif