/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:33:57 by cballet           #+#    #+#             */
/*   Updated: 2024/09/06 09:24:52 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/philo.h"

void ft_putstr_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}
int	ft_atoi(char *str)
{
	int	i;
	long int	result;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32 && str[i] != '\0'))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = (result * 10) + str[i] - 48;
		printf("Mon result est de %ld\n", result);
		i++;
	}
	if ((result > (2147483647 / 10)) || (result == (2147483647 / 10)) || ((str[i] - 48) > 2147483647 % 10))
		return (-1);
	return ((int)result * sign);
}

void ft_is_error(int code_error)
{

	if (code_error == 1)
		ft_putstr_error("ERROR ARG! You have to get 4 or 5 arguments \n");
	if (code_error == 2)
		ft_putstr_error("ERROR DIGIT! Argument is not a number or a positif number \n");
	if (code_error == 3)
		ft_putstr_error("ERROR! Int overflow\n");
	exit(0);
}

int	ft_is_number(int argc, char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '+')
		i++;
	else if (argc && argv[0] == 0 && argv[1] == 0)
		return (0);
	while (argv[i])
	{
		if ((argv[i] < 48) || (argv[i] > 57))
			return (0);

		i++;
	}
	return (1);
}

int	ft_is_overflow(char *argv)
{
	int	res;

	res = ft_atoi(argv);
	printf("%d\n", res);
	if (res == -1)
		return (0);
	return (1);
}

void ft_parsing(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc != 5 && argc != 6)
        ft_is_error(1);
    while (argv[i])
    {
        if (!ft_is_number(argc, argv[i]))
            ft_is_error(2);
		else if (!ft_is_overflow(argv[i]))
			ft_is_error(3);
		i++;
    }
}

int main(int argc, char **argv)
{
	ft_parsing(argc, argv);
}