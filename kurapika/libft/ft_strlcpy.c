/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:33:04 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/04 19:44:06 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t					srcsize;
	const char				*srcp;

	srcsize = ft_strlen(src);
	srcp = src;
	if (dstsize == 0)
		return (srcsize);
	if (dstsize > 0)
	{
		while ((--dstsize > 0) && *src)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (srcsize);
}
