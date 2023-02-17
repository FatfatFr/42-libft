/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:42 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 16:25:42 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	(const unsigned char *)s1;
	(const unsigned char *)s2;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > *p1)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}

/*int	main(void)
{
	char	one[] = "poupounette";
	char	two[] = "poupounette";

	printf("%d\n", ft_memcmp(one, two, 20));
	return (0);
}*/
