/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:15:22 by joao-ped          #+#    #+#             */
/*   Updated: 2026/01/07 20:16:18 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_down(int *stack, int len)
{
	int	i;

	i = len - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = 0;
}

void	ft_push_up(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[len - 1] = 0;
}

void	ft_pb(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	if (*len_a <= 0)
		return ;
	ft_push(stack_a, stack_b, len_a, len_b);
	write(1, "pb\n", 3);
}

void	ft_pa(int *stack_b, int *stack_a, int *len_b, int *len_a)
{
	if (*len_a <= 0)
		return ;
	ft_push(stack_b, stack_a, len_b, len_a);
	write(1, "pa\n", 3);
}
