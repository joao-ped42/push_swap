#include "push_swap.h"

void	ft_sa(int *a, int len)
{
	if (len < 2)
		return ;
	ft_swap(&a[0], &a[1]);
	write(1, "sa\n", 3);
}

void	ft_sb(int *b, int len)
{
	if (len < 2)
		return ;
	ft_swap(&b[0], &b[1]);
	write(1, "sb\n", 3);
}

void	ft_ss(int *a, int *b, int len_a, int len_b)
{
	if (len_a < 2 || len_b < 2)
		return ;
	ft_swap(&a[0], &a[1]);
	ft_swap(&b[0], &b[1]);
	write(1, "ss\n", 3);
}