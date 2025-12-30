/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 01:49:59 by joao-ped          #+#    #+#             */
/*   Updated: 2025/12/30 02:29:14 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	*ft_split_num(char *str, int len)
{
	char	**split_char;
	int		*ret;
	int		i;

	split_char = ft_split(str, len);
	ret = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		ret[i] = ft_atoi(split_char[i]);
		free(split_char[i]);
		i++;
	}
	free(split_char);
	return (ret);
}