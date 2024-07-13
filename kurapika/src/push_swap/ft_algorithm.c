/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:38:09 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/12 08:02:51 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_atoi2(const char *str)
{
	long long int	i;
	int				sign;

	i = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		out_of_bound(i * 10 + (*str - '0'));
		if (!ft_isdigit(*str))
			ft_error();
		i = i * 10 + (*str - '0');
		str++;
	}
	return (sign * i);
}

t_stack	*ft_sub_process(char **argv)
{
	int		i;
	int		j;
	char	**tmp;
	t_stack	*a;

	i = 0;
	tmp = ft_split(argv[1], ' ');
	a = NULL;
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

void	ft_sub_parse(char *arg, t_stack **a)
{
	int		j;
	int		k;
	char	**tmp;

	k = 0;
	tmp = ft_split(arg, ' ');
	while (tmp[k])
	{
		j = ft_atoi2(tmp[k]);
		ft_add_back(a, ft_stack_new(j));
		free(tmp[k]);
		k++;
	}
	free(tmp);
}

t_stack	*ft_process(int argc, char **argv)
{
	int		i;
	t_stack	*a;

	i = 1;
	a = NULL;
	if (argc > 2)
	{
		while (i < argc)
		{
			if (ft_strlen(argv[i]) == 0 || is_all_spaces(argv[i]))
				ft_error();
			ft_sub_parse(argv[i], &a);
			i++;
		}
	}
	else if (argc == 2)
		a = ft_sub_process(argv);
	else
		ft_error();
	return (a);
}
