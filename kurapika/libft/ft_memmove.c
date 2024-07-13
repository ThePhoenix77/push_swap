/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:42:25 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/11 23:54:11 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (d == s)
		return (dst);
	if ((s < d) && (s + len > d))
	{
		s += len;
		d += len;
		while (len-- > 0)
			*--(d) = *(--s);
	}
	else
	{
		while (len-- > 0)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
