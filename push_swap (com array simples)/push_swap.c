#include "push_swap.h"
#include <stdio.h>

int	*ft_stack_birth(int arg_count, char **args, int *check_error, int **stack_2, int *len)
{
	char	**split;
	int		*stack;

	if (arg_count == 2)
	{
		*len = ft_count_numbers(args[1]);
		split = ft_split(args[1], *len);
		stack = ft_aatoii(split, *len, check_error);
		ft_free_all(split, *len + 1);
	}
	else if (arg_count > 2)
	{
		*len = arg_count - 1;
		args++;
		stack = ft_aatoii(args, *len, check_error);
	}
	else
	{
		*check_error = 1;
		return (NULL);
	}
	*stack_2 = ft_calloc(*len, sizeof(int));
	if (*stack_2 == NULL)
		*check_error = 1;
	return (stack);
}

void	ft_sort(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	if (*len_a == 3)
		ft_sort_three(stack_a, len_a);
	else if (*len_a > 3)
		ft_sort_four_plus(stack_a, stack_b, len_a, len_b);
	free(stack_a);
	free(stack_b);
}

int	main(int argc, char *argv[])
{
	int		*stack_a;
	int		*stack_b;
	int		check_error;
	int		len_a;
	int		len_b;

	check_error = 0;
	stack_a = ft_stack_birth(argc, argv, &check_error, &stack_b, &len_a);
	if (!stack_a || check_error == 1)
	{
		free(stack_a);
		write(1, "Error\n", 6);
		return (0);
	}
	if ((ft_duplicated(stack_a, len_a)) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	len_b = 0;
	ft_turk_sort(stack_a, stack_b, &len_a, &len_b);
//	ft_sort(stack_a, stack_b, &len_a, &len_b);
	return (0);
}
