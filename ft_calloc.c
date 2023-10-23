#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*final;

	final = malloc(size * count);
	if (final == NULL)
		return (NULL);
	ft_memset (final, 0, size * count);
	return (final);
}
