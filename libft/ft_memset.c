#include "libft.h"

void *ft_memset(void *buf, int ch, size_t n)
{
	int	i;

	i = 0;
	while(i < (int)n)
	{
		*((char *)buf + i) = (char)ch;
		i ++;
	}
	return (buf);
}

// int main(void)
// {
// 	char	s[4];
// 	int	i;

// 	i = 0;
// 	ft_memset(s, '2', 3);

// 	while (i < 3)
// 	{
// 		write(1, &s[i], 1);
// 		i++;
// 	}
// }