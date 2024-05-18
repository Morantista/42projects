/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementballet <clementballet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:13:42 by clementball       #+#    #+#             */
/*   Updated: 2024/05/16 18:37:04 by clementball      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char **argv)
{
    int str;
    int pid;

    str = 0;
    if (argc == 3)
    {
        str = ft_atoi(argv[2]);
        ft_send(pid, str);
        
    }
}