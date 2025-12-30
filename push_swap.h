/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 01:50:24 by joao-ped          #+#    #+#             */
/*   Updated: 2025/12/30 01:51:25 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

char	**ft_split(char *str, int len);
char	*ft_substr(char *s, int start, int len);
int		*ft_split_num(char *str, int len);
int		ft_count_numbers(char *str);
int		ft_atoi(char *str);

#endif