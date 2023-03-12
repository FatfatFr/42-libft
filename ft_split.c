/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:27:54 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/12 14:16:42 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word++;
		while (s[i] && (s[i] != c))
		i++;
	}
	return (word);
}

static int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
	i++;
	len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;
	int		j;
	int		k;

	words = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab[words] = 0;
	i = 0;
	j = 0;
	while (i < words)
	{
		k = 0;
		while (s[j] == c)
			j++;
		tab[i] = malloc(sizeof(char) * (ft_word_len(s, c, j) + 1));
		while (s[j] && (s[j] != c))
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	char	test[] = "le chat noir";
	char	space = ' ';
	char	**result;
	int	i;

	i = 0;
	result = ft_split(test, space);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free (result);
	return (0);
}*/
