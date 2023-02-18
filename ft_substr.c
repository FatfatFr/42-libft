/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:33:36 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 18:04:39 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_substr(char const *s, unisgned int start, size_t len)
{
//malloc pour allouer memoire de la nouvelle chaine  retournee
//chaine retournee commence par start
//se termine par start + len
}

int	main(void)
{
	char	string[] = "poupounette";
	char	substring[len];

	substring = ft_substr(string, substring, 5);
	printf(substring);
	return (0);
}

//output 
// poupo
