/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:33:57 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/17 17:51:59 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			size;
	char		*copy;
	char		*cp;

	size = ft_strlen(s1);
	copy = (char *)malloc(size + 1);
	if (copy == NULL)
		return (NULL);
	cp = copy;
	while (*s1)
	{
		*copy++ = *s1++;
	}
	*copy = '\0';
	return (cp);
}
