#include "push_swap.h"

void	ft_rra(int *a, int len)
{
	if (len < 2)
		return ;
	ft_rev_rotate(a, len);
	write(1, "rra\n", 4);
}

void	ft_rrb(int *b, int len)
{
	if (len < 2)
		return ;
	ft_rev_rotate(b, len);
	write(1, "rrb\n", 4);
}

void	ft_rrr(int *a, int *b, int len_a, int len_b)
{
	ft_rev_rotate(a, len_a);
	ft_rev_rotate(b, len_b);
	write(1, "rrr\n", 4);
}