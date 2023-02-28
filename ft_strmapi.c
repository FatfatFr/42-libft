/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:47:33 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/28 11:03:12 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	s_len;
  	char	*string;
	unsigned int	i;

	i = 0;
	s_len = strlen(s);
	if (!s || !f)
	{
		return (NULL);
	}
	string = (char *)malloc(s_len + 1);
	if (!string)
	{
		return(NULL);
	}
	while (string[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;	
	}
	string[i] = '\0';
	return (string);
}


int	main(void)
{
	char	test [] = "hello";
	int	i;

	i = 0;
	while (test[i] != '\0')
	{
		printf("%s\n", ft_strmapi(test, toupper(test[i])));
		i++;
	}
}
//output
//HELLO

