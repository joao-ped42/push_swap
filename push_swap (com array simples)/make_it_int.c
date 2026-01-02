/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 01:49:59 by joao-ped          #+#    #+#             */
/*   Updated: 2025/12/31 22:47:48 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_conversion(char *str, int *error, int index, int sign)
{
	long int	aux;

	aux = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
		{
			*error = 1;
			return (0);
		}
		aux = (aux * 10) + (str[index] - '0');
		index++;
		if ((aux * sign) > 2147483647 || (aux * sign) < -2147483648)
		{
			*error = 1;
			return (0);
		}
	}
	return ((int)(aux * sign));
}

int	ft_atoi(char *str, int *error)
{
	int			ret;
	int			numbs[2];

	if (!str)
	{
		*error = 1;
		return (0);
	}
	numbs[0] = 0;
	numbs[1] = 1;
	if (str[numbs[0]] == '-' || str[numbs[0]] == '+')
	{
		if (str[numbs[0]] == '-')
			numbs[1] = -numbs[1];
		numbs[0]++;
	}
	if (str[numbs[0]] == '\0')
	{
		*error = 1;
		return (0);
	}
	ret = ft_conversion(str, error, numbs[0], numbs[1]);
	if (*error == 1)
		return (0);
	return (ret);
}

int	*ft_aatoii(char **str, int len, int *error_check)
{
	int		*ret;
	int		i;

	ret = (int *)malloc(sizeof(int) * len);
	if (!ret)
		return (NULL);
	i = 0;
	*error_check = 0;
	while (i < len)
	{
		ret[i] = ft_atoi(str[i], error_check);
		if (*error_check == 1)
		{
			free(ret);
			return (NULL);
		}
		i++;
	}
	return (ret);
}

int	ft_duplicated(int *n, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (n[i] == n[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
