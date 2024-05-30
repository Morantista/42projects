/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementballet <clementballet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:35:08 by clementball       #+#    #+#             */
/*   Updated: 2024/05/30 15:12:47 by clementball      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/*https://github.com/thebrisly/42_Cursus-Piscine/blob/master/3.2%20-%20MINITALK/server.c*/


int	ft_recursive_power(int nb, int power)
{
	int res;

	res = 0;
	if (power == 0)
		res = 1;
	if (power < 0)
		return (0);
	if (power <= 1)
	{
		res = nb * ft_recursive_power(nb, power - 1);
		return (res);
	}
}
char	ft_copy_to_string(char s1, char res)
{
	int	i;
	int	j;
	char *final;

	final = malloc(sizeof)((char) * (ft_strlen(s1) + 2));
	if (!final)
	{
		free(final);
		return (NULL);
	}
	while(final[i])
	{
		final[i] = s1[j];
		i++;
		j++;
	}
	final[i] = res;
	i++;
	final[i] = '\0';
	free(s1);
	return(final);
}
void signal_handler(int signum) {
    static int counter;
    static int res;
    static char *final;

	counter = 0;
	res = 0;
    if (!final)
        final = ft_strdup("");
	/*je cree une chaine de caractere malloc si elle n'existe pas */
    if (signum == SIGUSR1)
        res = res + 0;
	/*si le signe recu est egal a zero, j'additionne 0 au resultat existant */
    else if (signum == SIGUSR2)
        res = res + ft_recursive_power(2, 7 - counter);
	/*si le signe est egal a 1, j'additionne le resultat et sa puissance devient sa position. ex : s'il est situe tout a gauche, il sera de puissance 7 - 0 */

    counter++;
    if (counter == 8) {
        final = ft_copy_to_string(final, res);
        if (result == '\0') {
            ft_printf("%s\n", final);
            final = NULL;
        }
        counter = 0;
        res = 0;
    }
}

int	main(int argc, char **argv)
{
	struct sigaction	signal;


	ft_printf("\n***WELCOME to Clement's server***\n\n");
	ft_printf("*|Server's PID : %d|*\n\n",getpid());
	signal.sa_sigaction = ft_handler;
	signal.sa_flags = 0;
	if (sigaction(SIGUSR1, &signal, NULL) == -1)
		is_error1("Server : Fail reception SIGUSR1\n");
	if (sigaction(SIGUSR2, &signal, NULL == -1))
		is_error1("Server : Fail reception SIGUSR2\n");





}
