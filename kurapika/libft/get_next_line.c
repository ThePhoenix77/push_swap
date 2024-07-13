/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:18:34 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/09 10:50:08 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_file(int fd, char *res)
{
	char	*buf;
	int		readbytes;

	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	readbytes = 1;
	while (!ft_strchr2(res, '\n') && readbytes != 0)
	{
		readbytes = read(fd, buf, BUFFER_SIZE);
		if (readbytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[readbytes] = '\0';
		res = ft_strjoin2(res, buf);
	}
	free(buf);
	return (res);
}

char	*ft_get_line(char *s)
{
	char	*line;
	int		length;
	int		i;

	length = 0;
	if (!s[length])
		return (NULL);
	while (s[length] && s[length] != '\n')
		length++;
	if (s[length])
		length++;
	line = (char *)malloc(sizeof(char) * length + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < length)
	{
		line[i] = s[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_get_rest(char *s)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	rest = (char *)malloc(sizeof(char) * (ft_strlen2(s) - i));
	if (!rest)
	{
		free(s);
		return (NULL);
	}
	i++;
	while (s[i])
		rest[j++] = s[i++];
	rest[j] = '\0';
	free(s);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*res;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = ft_read_file(fd, res);
	if (!tmp)
	{
		if (res)
			free(res);
		res = NULL;
		return (NULL);
	}
	res = tmp;
	line = ft_get_line(res);
	res = ft_get_rest(res);
	return (line);
}
