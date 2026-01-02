#include "push_swap.h"
#include <stdio.h>

int	ft_smaller(int *stack, int len)
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

void	ft_top_to_push_b(int *stack1, int *stack2, int *len1, int *len2, int limit)
{
	int	min_pos;
	int	min_val;
	int	i;

	i = 0;
	while (i < limit)
	{
		min_pos = ft_smaller(stack1, *len1);
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

void	ft_push_min_to_a(int *stack_a, int *stack_b, int *len_a, int *len_b, int limit)
{
	int	i;

	i = 0;
	while (i < limit)
	{
		ft_pa(stack_b, stack_a, len_b, len_a);
		i++;
	}
}

void	ft_sort_four_plus(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	int	limit;
	int	i;

	i = 0;
	limit = *len_a - 3;
	printf("%d\n", limit);
	ft_top_to_push_b(stack_a, stack_b, len_a, len_b, limit);
	ft_sort_three(stack_a, len_a);
	ft_push_min_to_a(stack_a, stack_b, len_a, len_b, limit);
}
