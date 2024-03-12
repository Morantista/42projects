/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:42:53 by cballet           #+#    #+#             */
/*   Updated: 2023/11/24 12:17:30 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static int	w_len(char *s, char charset)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != charset)
		i++;
	return (i);
}

static void	ft_wordcopy(char *dest, char *src, char charset)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != charset)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void	ft_assign(int *i, int *j, int *k)
{
	*i = -1;
	*j = 0;
	*k = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		is_word;
	int		i;
	int		j;

	ft_assign(&i, &j, &is_word);
	if (!s)
		return (NULL);
	dest = (char **)ft_calloc((ft_nb_word((char *)s, c) + 1), sizeof(char *));
	if (!dest)
		return (NULL);
	while (s[++i])
	{
		if (is_word == 0 && s[i] != c)
		{
			dest[j] = malloc((w_len((char *)&s[i], c) + 1) * sizeof(char));
			if (!dest[j])
				free(dest);
			is_word = 1;
			ft_wordcopy(dest[j++], (char *)&s[i], c);
		}
		if (s[i] == c)
			is_word = 0;
	}
	return (dest);
}
