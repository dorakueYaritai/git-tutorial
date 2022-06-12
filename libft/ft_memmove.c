#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while(i < (int)n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char str[] = "abcdefghijklmnopqrstu";
// 	printf("before: %s\n", str);
// 	ft_memmove(str + 5, str, 10);
// 	printf("after: %s\n", str);
// 	return 0;
// }