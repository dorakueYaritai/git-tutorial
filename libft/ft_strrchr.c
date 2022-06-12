#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		ptr = (char *)s + i;
	return (ptr);
}
