/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:35:57 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/19 00:59:41 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			res = s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)res);
}
