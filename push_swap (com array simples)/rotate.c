/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:15:27 by joao-ped          #+#    #+#             */
/*   Updated: 2026/01/07 20:15:27 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *a, int len)
{
	if (len < 2)
		return ;
	ft_rotate(a, len);
	write(1, "ra\n", 3);
}

void	ft_rb(int *b, int len)
{
	if (len < 2)
		return ;
	ft_rotate(b, len);
	write(1, "ra\n", 3);
}

void	ft_rr(int *a, int *b, int len_a, int len_b)
{
	ft_rotate(a, len_a);
	ft_rotate(b, len_b);
	write(1, "rr\n", 3);
}
