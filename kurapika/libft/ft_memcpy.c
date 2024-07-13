/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:13:37 by tboussad          #+#    #+#             */
/*   Updated: 2023/11/30 18:31:57 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstp;
	unsigned char	*srcp;

	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (n > 0)
	{
		*dstp = *srcp;
		dstp++;
		srcp++;
		n--;
	}
	return (dst);
}
