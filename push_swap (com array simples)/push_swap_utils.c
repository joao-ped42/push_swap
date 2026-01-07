/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:15:12 by joao-ped          #+#    #+#             */
/*   Updated: 2026/01/07 20:15:13 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(int nmemb, int size)
{
	unsigned char		*array;
	int					i;

	i = 0;
	if (size != 0 && (nmemb > 2147483647 / size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	while (i < (size * nmemb))
	{
		array[i] = 0;
		i++;
	}
	return ((void *)array);
}

int	ft_biggest(int *stack, int len)
{
	int	i;
	int	pos;
	int	max;

	i = 1;
	pos = 0;
	max = stack[0];
	while (i < len)
	{
		if (stack[i] > max)
		{
			pos = i;
			max = stack[i];
		}
		i++;
	}
	return (pos);
}
