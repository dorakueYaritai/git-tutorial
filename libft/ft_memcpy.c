#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
}

int main(void)
{
	int	i;
	char str[5];

	i = 0;
	ft_memcpy(str, "okey", 5);

	while(i < 5)
	{
		write (1, str + i, 1);
		i++;
	}
}
