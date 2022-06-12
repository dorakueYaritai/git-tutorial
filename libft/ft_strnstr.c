#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	// char			*c;

	if (needle[0] == '\0')
		return (char *)(haystack);
	i = 0;
	// c = NULL;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while(haystack[i + j] == needle[j])
				j++;
			if (j == len)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
