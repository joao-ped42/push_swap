#include "push_swap.h"
#include <stdio.h>

void	ft_turk_sort(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	while (*len_a != 3)
		ft_pb(stack_a, stack_b, len_a, len_b);
	ft_sort_three(stack_a, len_a);
}