#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if(i < dstsize - 1)
			dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[dstsize - 1] = '\0';
	return (i);
}
