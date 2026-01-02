#include "push_swap.h"

int	ft_count_numbers(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !((str[i] >= '0' && str[i] <= '9') || (str[i] == '-')))
			i++;
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			n++;
		while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || str[i] == '-'))
			i++;
	}
	return (n);
}

char	*ft_substr(char *s, int start, int len)
{
	char				*sub;
	int					i;
	int					j;

	i = 0;
	j = 0;
	sub = malloc((sizeof(char)) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[j] = s[start];
		start++;
		j++;
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

char	**ft_split(char *str, int n)
{
	char	**ret;
	int		start;
	int		i;
	int		j;

	ret = (char **)malloc(sizeof(char **) * (n + 1));
	i = 0;
	j = 0;
	while (j < n)
	{
		while (str[i] != '\0' && !((str[i] >= '0' && str[i] <= '9') || (str[i] == '-')))
			i++;
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			start = i;
		while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || str[i] == '-'))
			i++;
		ret[j] = ft_substr(str, start, (i - start));
		j++;
	}
	ret[j] = NULL;
	return (ret);
}

void	ft_free_all(char **strings, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}
