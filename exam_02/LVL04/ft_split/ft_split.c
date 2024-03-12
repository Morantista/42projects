/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:02:00 by cballet           #+#    #+#             */
/*   Updated: 2024/01/25 20:36:27 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	len_words(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] && is_separator(str[i]) == 0)
		{
			i++;
			len++;
		}
		else if (str[i] && is_separator(str[i]) == 1)
			i++;
	}
	return (len);
}

char	*ft_len_copy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] && is_separator(str[i]) == 0)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && is_separator(str[i]) == 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int i;
	int j;
	char **split;

	i = 0;
	while (str[i] && is_separator(str[i]) == 1)
		i++;
	split = (char **)malloc(sizeof(char *) * len_words(str) + 1);
	if (!split)
		return (0);
	j = 0;
	while (str[i])
	{
		if (str[i] && is_separator(str[i]) == 0)
		{
			split[j] = ft_len_copy(&str[i]);
			j++;
		}
		while (str[i] && is_separator(str[i]) == 0)
			i++;
		while (str[i] && is_separator(str[i]) == 1)
			i++;
	}
	split[j] = NULL;
	return (split);
}


	// int main()
	// {
	// 	char	**tab;
	// 	int	i;

	// 	tab = ft_split("Bonjour comment vas tu?");
	// 	i = 0;
	// 	while (i < 4)
	// 	{
	// 		printf("%s\n", tab[i]);
	// 		i++;
	// 	}
	// 	return (0);
	// }
