#include "push_swap.h"

int		ft_is_sorted(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len && i + 1 < len)
	{
		if (stack[i] > stack[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_push(int *stack1, int *stack2, int *len1, int *len2)
{
	if (*len1 <= 0)
		return ;
	ft_push_down(stack2, *len2);
	stack2[0] = stack1[0];
	ft_push_up(stack1, *len1);
	(*len1)--;
	(*len2)++;
}

void	ft_rotate(int *stack, int len)
{
	int	temp;
	int	i;

	temp = stack[0];
	i = 0;
	while (i < len - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[len - 1] = temp;
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_rotate(int *stack, int len)
{
	int	temp;
	int	i;

	temp = stack[len - 1];
	i = len - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = temp;
}