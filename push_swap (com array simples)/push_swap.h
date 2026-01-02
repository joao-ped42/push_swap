/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 01:50:24 by joao-ped          #+#    #+#             */
/*   Updated: 2026/01/01 16:07:19 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

char	**ft_split(char *str, int len);
char	*ft_substr(char *s, int start, int len);
int		*ft_aatoii(char **str, int len, int *error_check);
void	*ft_calloc(int nmemb, int size);
int		ft_count_numbers(char *str);
int		ft_atoi(char *str, int *error_check);
int		ft_split_len(char **split);
int		ft_conversion(char *str, int *error, int index, int sign);
int		ft_duplicated(int *n, int len);
int		ft_smaller(int *stack, int len);
void	ft_free_all(char **strings, int len);
void	ft_push(int *stack1, int *stack2, int *len1, int *len2);
void	ft_push_down(int *stack, int len);
void	ft_push_up(int *stack, int len);
void	ft_pb(int *stack_a, int *stack_b, int *len_a, int *len_b);
void	ft_pa(int *stack_b, int *stack_a, int *len_b, int *len_a);
void	ft_rotate(int *stack, int len);
void	ft_ra(int *a, int len);
void	ft_rb(int *b, int len);
void	ft_rr(int *a, int *b, int len_a, int len_b);
void	ft_rev_rotate(int *stack, int len);
void	ft_rra(int *a, int len);
void	ft_rrb(int *b, int len);
void	ft_rrr(int *a, int *b, int len_a, int len_b);
void	ft_swap(int *a, int *b);
void	ft_sa(int *a, int len);
void	ft_sb(int *b, int len);
void	ft_ss(int *a, int *b, int len_a, int len_b);
void	ft_top_to_push_b(int *stack1, int *stack2, int *len1, int *len2, int limit);
void	ft_sort_three(int *stack, int *len);
void	ft_sort_four_plus(int *stack_a, int *stack_b, int *len_a, int *len_b);

#endif