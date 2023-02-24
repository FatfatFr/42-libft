/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:00 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/23 10:36:43 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = strlen(little);
	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (*big && len-- >= little_len)
	{
		if (*big == *little && strncmp(big, little, little_len) == 0)
		{
			return ((char *)big);
		}
		big++;
	}
	return (0);
}

/*int	main(void)
{
	char	big[] = "hellopoupounette";
	char	little[] = "poun";
	int	len = 13;

	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}*/
