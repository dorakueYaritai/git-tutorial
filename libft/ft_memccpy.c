#include "libft.h"
//NULL文字で検索するのかな？　とりあえずcharで検索するならそれくらいだよなあ。あとは電話番号の後ろと前とか？

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (*(char *)(src + i) == (char)c)
			return(dest + i + 1);
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (NULL);
}
