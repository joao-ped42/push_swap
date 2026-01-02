#include "push_swap.h"
#include <stdio.h>

int	*ft_stack_birth(int arg_count, char **args, int *check_error, int *len)
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
	return (stack);
}

int	main(int argc, char *argv[])
{
	int		*stack_a;
	int		check_error;
	int		len;

	check_error = 0;
	stack_a = ft_stack_birth(argc, argv, &check_error, &len);
	if (!stack_a || check_error == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if ((ft_duplicated(stack_a, len)) == 1)
	{
		free(stack_a);
		write(1, "Error\n", 6);
		return (0);
	}
	if (len == 3)
		ft_sort_three(stack_a, &len);
	free(stack_a);
	return (0);
}
