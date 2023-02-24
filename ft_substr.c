/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:33:36 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/23 10:36:17 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//malloc pour allouer memoire de la nouvelle chaine  retournee
//chaine retournee commence par start
//se termine par start + len

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t		i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if (start > strlen(s))
	{
		return (NULL);
	}
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
	{
		return (NULL);
	}
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char	test[] = "poupounette";

	char* funcsubstr = ft_substr(test, 3, 20);
	printf("%s\n", funcsubstr);
	return (0);
}*/

//output 
// pounette
