/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:51:38 by kakiba            #+#    #+#             */
/*   Updated: 2022/06/01 23:39:57 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**nptr;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	printf("1\n");
	nptr = malloc(sizeof(char **) * j);
	i = 0;
	j = 0;
	while (s[i])
	{
		k = i;
		while (s[i] != c && s[i])
			i++;
		nptr[j++] = ft_substr(s, k, i - k);
		while (s[i] == c)
			i++;
	}
	printf("1\n");
	return (nptr);
}

int	main(void)
{
	char	**s;

	s = ft_split("ababa,,,ba,b", ',');

	for (int i = 0; i < 2; i++)
	{
		printf("%s\n", s[i]);
	}
	return (0);
}