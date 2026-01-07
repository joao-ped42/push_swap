/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:14:51 by joao-ped          #+#    #+#             */
/*   Updated: 2026/01/07 20:39:16 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_find_target(int *stack_a, int num_b)
{
	int	i;
	int	pos;
	int	big_pos;

	i = 0;
	pos = 0;
	big_pos = ft_biggest(stack_a, 3);
	while (i < 3 && i + 1 < 3)
	{
		if (stack_a[i] > num_b && stack_a[i] < stack_a[big_pos])
			pos = i;
		i++;
	}
	return (pos);
}

void	ft_turk_sort(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	int	target_pos;
	int	smaller_pos;
	int	cost;

	while (*len_a != 3)
		ft_pb(stack_a, stack_b, len_a, len_b);
	ft_sort_three(stack_a, len_a);
	target_pos = ft_find_target(stack_a, stack_b[0]);
	smaller_pos = ft_smallest(stack_b, *len_b);
	if (smaller_pos <= (*len_b / 2))
		cost = smaller_pos;
	else
		cost = *len_b - smaller_pos;
}
