/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:49:35 by tboussad          #+#    #+#             */
/*   Updated: 2023/12/19 03:49:37 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned int, char *))
{
	size_t			len;
	unsigned int	i;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return ;
	len = ft_strlen(s);
	if ((!s) || (!f))
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
