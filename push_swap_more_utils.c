void	ft_fill_stack(int *stack, char *nums, int nmemb)
{
	int	i;

	i = 0;
	while (i < nmemb)
	{
		stack[i] = ft_atoi(nums[i]);
		i++;
	}
}