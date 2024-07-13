/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:18:18 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/18 21:51:32 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*memory;

	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	total = count * size;
	memory = malloc(total);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, total);
	return (memory);
}
