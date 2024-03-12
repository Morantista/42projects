/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:41:04 by cballet           #+#    #+#             */
/*   Updated: 2024/01/11 19:39:47 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*readandcopy(int fd, char *stash)
{
	int		bytes_readed;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_readed = 1;
	while (!ft_strchr(stash, '\n') && bytes_readed != 0)
	{
		bytes_readed = read(fd, buf, BUFFER_SIZE);
		if (bytes_readed == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes_readed] = '\0';
		stash = ft_strjoin(stash, buf);
	}
	free(buf);
	return (stash);
}

char	*get_line(char *stash)
{
	size_t	i;
	size_t	size;
	char	*dest;

	size = 0;
	if (!stash[size])
		return (NULL);
	while (stash[size] && stash[size] != '\n')
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 2));
	if (!dest)
		return (NULL);
	i = 0;
	while (stash[i] && i <= size)
	{
		dest[i] = stash[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*clean_stash(char *stash)
{
	int		size;
	int		i;
	char	*dest;

	size = 0;
	i = 0;
	while (stash[size] && stash[size] != '\n')
		size++;
	if (!stash[size])
	{
		free(stash);
		return (NULL);
	}
	dest = (char *)malloc(sizeof(char) * ((ft_strlen(stash) - size) + 1));
	if (!dest)
		return (NULL);
	size++;
	while (stash[size] && stash[size] != '\0')
		dest[i++] = stash[size++];
	dest[i] = '\0';
	free(stash);
	return (dest);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stash = readandcopy(fd, stash);
	if (!stash)
		return (NULL);
	line = get_line(stash);
	stash = clean_stash(stash);
	return (line);
}
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("coucou.txt", O_RDWR);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (1)
	{
		if (line == NULL)
			break ;
		printf("|%s|", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
	close(fd);
}
