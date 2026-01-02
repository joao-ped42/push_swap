#include "push_swap.h"

static int	ft_overflow(int nmemb, int size)
{
	return (size != 0 && (nmemb > (int)-1 / size));
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

void	*ft_calloc(int nmemb, int size)
{
	void		*array;

	if (ft_overflow(nmemb, size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_memset(array, 0, (size * nmemb));
	return (array);
}