int	ft_atoi(char *str)
{
	int	ret;
	int	i;
	int	sign;

	ret = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (ret * sign);
}