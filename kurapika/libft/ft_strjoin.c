/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:57:29 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/17 17:52:10 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*js;

	i = 0;
	j = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	js = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (js == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		js[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		js[i] = s2[j];
		i++;
		j++;
	}
	js[i] = '\0';
	return (js);
}
