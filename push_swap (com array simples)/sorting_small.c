/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:15:34 by joao-ped          #+#    #+#             */
/*   Updated: 2026/01/07 20:21:59 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_smallest(int *stack, int len)
{
	int	pos;
	int	min;
	int	i;

	i = 1;
	min = stack[0];
	pos = 0;
	while (i < len)
	{
		if (stack[i] < min)
		{
			pos = i;
			min = stack[i];
		}
		i++;
	}
	return (pos);
}

void	ft_top_to_push_b(int *stack1, int *stack2, int *len1, int *len2)
{
	int	min_pos;
	int	min_val;
	int	i;
	int	limit;

	i = 0;
	limit = *len1 - 3;
	while (i < limit)
	{
		min_pos = ft_smallest(stack1, *len1);
		min_val = stack1[min_pos];
		if (min_pos <= *len1 / 2)
		{
			while (stack1[0] != min_val)
				ft_ra(stack1, *len1);
		}
		else
		{
			while (stack1[0] != min_val)
				ft_rra(stack1, *len1);
		}
		ft_pb(stack1, stack2, len1, len2);
		i++;
	}
}

void	ft_sort_three(int *stack, int *len)
{
	int	first;
	int	second;
	int	third;

	first = stack[0];
	second = stack[1];
	third = stack[2];
	if (first > second && first > third)
		ft_ra(stack, *len);
	else if (second > first && second > third)
		ft_rra(stack, *len);
	if (stack[0] > stack[1])
		ft_sa(stack, *len);
}

void	ft_push_min_to_a(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	int	i;
	int	limit;

	limit = *len_a - 3;
	i = 0;
	while (i < limit)
	{
		ft_pa(stack_b, stack_a, len_b, len_a);
		i++;
	}
}

void	ft_sort_four_plus(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	ft_top_to_push_b(stack_a, stack_b, len_a, len_b);
	ft_sort_three(stack_a, len_a);
	ft_push_min_to_a(stack_a, stack_b, len_a, len_b);
}
