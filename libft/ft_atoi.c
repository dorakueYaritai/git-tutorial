#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

long int ft_strtol(const char *nptr, char **endptr, int base);
int		start_check(const char *nptr, int *base, int *judge_minus);
int		index_check(char c, int base);

int		ft_atoi(const char *str)
{
	long int a;

	a = ft_strtol(str, (char**)NULL, 10);
	if (a < -2147483648 || a > 2147483647)
		return (0);
	else
		return (int)(a);
}

long int ft_strtol(const char *nptr, char **endptr, int base)
{
	int					i;
	int					judge_minus;
	unsigned long int	sum;

	sum = 0;
	judge_minus = 1;
	i = start_check(nptr, &base, &judge_minus);
	printf("%dだよ\n", i);
	if (index_check(nptr[i], base) == 0)
		return (0);
	while (index_check(nptr[i], base) != -1)
	{
			if ((sum * base + index_check(nptr[i], base)) <= LONG_MAX)
				sum = sum * base + index_check(nptr[i++], base);
			else if (judge_minus == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
	}
	endptr = malloc(sizeof(char **));
	*endptr = (char *)&nptr[i];
	return (judge_minus * sum);
}

int	start_check(const char *nptr, int *base, int *judge_minus)
{
	int	i;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i ++;
	if (nptr[i] == '-')
	{
		if (nptr[i++] == '-')
			*judge_minus = -1;
	}
	if ((*base == 0 || *base == 16) && nptr[i] == '0' &&
	(nptr[i + 1] == ('x') || nptr[i + 1] == ('X')))
	{
		i = i + 2;
		*base = 16;
	}
	else if ((*base == 0 || *base == 8) && nptr[i] == '0')
	{
		i ++;
		*base = 8;
	}
	return (i);
}

int	index_check(char c, int base)
{
	char	*str;

	str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	c = ft_toupper(c);
	if (ft_strchr(str, c) == NULL)
		return (-1);
	else if (ft_strchr(str, c)- str < base)
		return (ft_strchr(str, c) - str);
	else
		return (-1);
}


// int		ft_atoi(const char *str)
// {
// 	long int a;

// 	a = ft_strtol(str, (char**)NULL, 10);
// 	if (a < -2147483648 || a > 2147483647)
// 		return (0);
// 	else
// 		return (int)(a);
// }

// long int ft_strtol(const char *nptr, char **endptr, int base)
// {
// 	long int	i;
// 	long int	*judge_minus;
// 	unsigned long int	sum;
// 	char	*str;

// 	str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	sum = 0;
// 	i = 0;
// 	judge_minus = 1;
// 	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
// 		i ++;
// 	if (nptr[i] == '+' || nptr[i] == '-')
// 	{
// 		if (nptr[i] == '-')
// 			judge_minus = -1;
// 		i ++;
// 	}
// 	if ((base == 0 || base == 16) && nptr[i] == '0' && (nptr[i + 1] == ('x') || nptr[i + 1] == ('X')))
// 	{
// 		i = i + 2;
// 	}
// 	else if ((base == 0 || base == 8) && nptr[i] == '0')
// 		i ++;
// 	while (ft_strchr(str, nptr[i]) - str < base)
// 		{
// 			printf("%ld\n", sum);
// 			if ((sum = (sum * base + (ft_strchr(str, nptr[i]) - str))) <= 9223372036854775807)
// 			{
// 				printf("%ld\n", sum);
// 				sum = sum * base + (ft_strchr(str, nptr[i]) - str);
// 				printf("%ld\n", sum);
// 			}
// 			else
// 				return ((long int)(-1 * judge_minus * -9223372036854775807));
// 			i++;
// 		}
// 	return (long int)(judge_minus * sum);
// }
