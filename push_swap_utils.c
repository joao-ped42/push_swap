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
		while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || str[i] != '-'))
			i++;
	}
	return (n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
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

char	**ft_split(char *str)
{
	char	**ret;
	int		start;
	int		i;
	int		j;
	int		erase;

	erase = ft_count_numbers(str);
	ret = (char **)malloc(sizeof(char **) * (erase + 1));
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !((str[i] >= '0' && str[i] <= '9') || (str[i] == '-')))
			i++;
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			start = i;
		while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || str[i] != '-'))
			i++;
		ret[j] = ft_substr(str, start, (i - start));
		j++;
	}
	ret[erase] = NULL;
	return (ret);
}

int	**ft_aatoii(char *str)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_count_numbers("  43 23 53  "));
}