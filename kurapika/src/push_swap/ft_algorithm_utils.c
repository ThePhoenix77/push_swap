/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:15:00 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/12 16:37:53 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r');
}

void	out_of_bound(long long int res)
{
	if (INT_MIN > res || res > INT_MAX)
		ft_error();
}

int	is_all_spaces(char *s)
{
	while (*s)
	{
		if (!is_space(*s))
			return (0);
		s++;
	}
	return (1);
}

void	ft_freestr(char **str)
{
	char	*n;

	if (!str)
		return ;
	while (*str)
	{
		n = *str;
		str++;
		free(n);
	}
	*str = NULL;
}
