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

int	ft_mid(int *stack)
{
	
}