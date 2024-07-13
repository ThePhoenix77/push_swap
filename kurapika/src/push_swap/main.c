/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:10:49 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/09 08:28:04 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_process(argc, argv);
	if (!a || ft_check_dup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_check_sorted(a))
	{
		ft_sort(&a);
	}
	ft_free(&a);
	return (0);
}
