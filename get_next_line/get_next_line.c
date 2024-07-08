#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	if (!str)
		return (NULL);
	if (c == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str);
		i++;
	}
	return (NULL);
}

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *str, char *join)
{
	int		i;
	int		strlen;
	int		joinlen;
	char	*dest;

	if (!str)
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[0] = '\0';
	}
	if (!str && !join)
		return (NULL);
	strlen = ft_strlen(str);
	joinlen = ft_strlen(join);
	dest = (char *)malloc(sizeof(char) * ((strlen + joinlen) + 2));
	if (!dest)
		return (NULL);
	dest = ft_strcpy(dest, str);
	i = 0;
	while (join[i])
	{
		dest[strlen] = join[i];
		i++;
		strlen++;
	}
	dest[strlen] = '\0';
	return (dest);
}

char	*read_and_copy(int fd, char *stash)
{
	int		size_readed;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	size_readed = 1;
	while (!ft_strchr(stash, '\n') && size_readed != 0)
	{
		size_readed = read(fd, buff, BUFFER_SIZE);
		if (size_readed == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[size_readed] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	free (buff);
	return (stash);
}
char	*get_line(char *stash)
{
	char	*dest;
	int		size;
	int		i;

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
	char	*dest;
	int		size;
	int		i;

	size = 0;
	if (!stash[size])
	{
		free (stash);
		return (NULL);
	}
	while (stash[size] && stash[size] != '\n')
		size++;
	dest = (char *)malloc(sizeof(char) * ((ft_strlen(stash) - size) + 1));
	if (!dest)
		return (NULL);
	size++;
	i = 0;
	while (stash[size])
	{
		dest[i] = stash[size];
		i++;
		size++;
	}
	dest[i] = '\0';
	free(stash);
	return (dest);
}

char	*get_next_line(int fd)
{
	static char *stash;
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_and_copy(fd, stash);
	if (!stash)
		return (NULL);
	line = get_line(stash);
	stash = clean_stash(stash);
	return (line);
}


