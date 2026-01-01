#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**splitted;
	int		*stack_a;
	int		check_error;
	int		len;
	
	check_error = 0;
	if (argc == 2)
	{
		len = ft_count_numbers(argv[1]);
		splitted = ft_split(argv[1], len);
		stack_a = ft_aatoii(splitted, len, &error_check);
		free_all(splitted, len);
	}
	else if (argc > 2)
	{
		len = argc - 1;
		argv++;
		stack_a = ft_aatoii(argv, len, &check_error);
	}
	if (!stack_a)
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
	free(stack_a);
	return (0);
}
