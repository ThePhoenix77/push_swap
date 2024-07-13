/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:43:24 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/19 01:15:24 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	res = 0;
	while (*s1 && *s2 && (n > 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	res = *(unsigned char *)s1 - *(unsigned char *)s2;
	if (res > 0)
		res = 1;
	else if (res < 0)
		res = -1;
	return (res);
}
