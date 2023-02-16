/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:42 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/16 17:56:35 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	(const unsigned char *)ptr1;
	(const unsigned char *)ptr2;
	p1 = (const unsigned char *)ptr1;
	p2 = (const unsigned char *)ptr2;
	while (num-- > 0)
	{
		if (*p1++ != *p2++)
		{
			return (*(p1 - 1) - *(p2 - 1));
		}
	}
	return (0);
}

/*int	main(void)
{
	char	one[] = "toutounette";
	char	two[] = "poupounette";

	printf("%d\n", ft_memcmp(one, two, 5));
	return (0);
}*/
