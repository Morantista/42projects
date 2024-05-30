/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:13:42 by clementball       #+#    #+#             */
/*   Updated: 2024/05/28 17:39:11 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	is_pid(char *str, char *pid)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (pid[j] != str[i])
		{
			if (pid[j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void ft_send(int server_pid, char *str)
{
	int	i;
	int j;

	i = 7;
	j = 0;
	while (str[j])
	{
		while (i >= 0)
		{
			if ((str[j]>> i) & 1)
				kill(server_pid, SIGUSR2);
			else
				kill(server_pid, SIGUSR1);
			i--;
		}
		usleep(100);
		j++;

	}
	i = 7;
	while (i >= 0)
	{
		kill(server_pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int	server_pid;

	if (argc != 3)
		is_error1("Error, too few arguments\n");
	else
	{
		if (is_pid(argv[1], "0123456789") == 0)
			is_error1("Error, arg[1] is not a PID\n");
		if (argv[2][0] == '\0')
			is_error1("Nothing to send\n");
		server_pid = ft_atoi(argv[1]);
		if (server_pid <= 0)
			is_error1("Error, PID is not valid\n");
		ft_send(server_pid, argv[2]);
		ft_printf("Client : message sends with success\n");
	}
}
