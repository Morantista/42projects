/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:50:57 by cballet           #+#    #+#             */
/*   Updated: 2024/02/13 09:24:20 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	ft_words_len(char *str)
{
	int	idx;
	int	length;

	idx = 0;
	length = 0;
	while (str[idx] != '\0')
	{
		if (!ft_is_delimiter(str[idx]))
		{
			length++;
			idx++;
		}
		else
			idx++;
	}
	return (length);
}

static char	*ft_free_malloc(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	*ft_get_word(char *str)
{
	int		idx;
	char	*word;

	idx = 0;
	while (str[idx] != '\0' && !ft_is_delimiter(str[idx]))
		idx++;
	word = (char *)malloc(sizeof(char) * (idx + 1));
	if (!word)
		return (ft_free_malloc(&word));
	idx = 0;
	while (str[idx] != '\0' && !ft_is_delimiter(str[idx]))
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		idx;
	int		i;
	char	**split;

	idx = 1;
	i = 0;
	split = (char **)malloc(sizeof(char *) * ft_words_len(str) + 2);
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_is_delimiter(str[i]))
			i++;
		if (str[i] && !ft_is_delimiter(str[i]))
		{
			split[idx] = ft_get_word(&str[i]);
			idx++;
		}
		while (str[i] && !ft_is_delimiter(str[i]))
			i++;
	}
	split[idx] = NULL;
	return (split);
}

// int	main(void)
// {
// 	int		idx;
// 	char	**tab;

// 	idx = 0;
// 	tab = ft_split("1 2 3 4 5 6 7 8 9");
// 	while (idx < 10)
// 	{
// 		printf("String %d : %s\n", idx, tab[idx]);
// 		free (tab[idx]);
// 		idx++;
// 	}
// 	free(tab);
// 	return (0);
// }
