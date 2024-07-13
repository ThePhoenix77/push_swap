/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:16:09 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/09 10:59:57 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(char *str_line, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!str_line)
	{
		str_line = (char *)malloc(1 * sizeof(char));
		str_line[0] = '\0';
	}
	if (!str_line || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen2(str_line)
					+ ft_strlen2(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (str_line[++i] != '\0')
		str[i] = str_line[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen2(str_line) + ft_strlen2(buff)] = '\0';
	free(str_line);
	return (str);
}
