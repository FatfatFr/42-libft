/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:49:23 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/21 12:20:10 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;

	newstring = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (!newstring)
	{
		return (NULL);
	}
}

int	main(void)
{
	char	first[] = "first";
	char	second[] = "second";

	char *functrjoin= ft_strjoin(s1, s2);
	print("%s\n", funcstrjoin);
	return (0);
}

//output
//firstsecond
