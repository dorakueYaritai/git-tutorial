#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(size * count);
	return (memory);
}

//return (malloc(size * n))でも生けるかな?;
