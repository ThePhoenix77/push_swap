/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:58:40 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/10 17:44:55 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_sorted(t_stack *stack_a)
{
	int	n;

	n = stack_a->nbr;
	while (stack_a)
	{
		if (n > stack_a->nbr)
			return (0);
		n = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return (1);
}
