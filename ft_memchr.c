/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:24 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/14 16:28:18 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char *p = ptr;
	int	i;
	
	i = 0;
	while (n > i)
	{
		if (*p == (unsigned char)c)
		{
			return (void *)(p);
		}
		p++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char	ptr[] = "toutounette";
	printf("%c\n", *(char *)ft_memchr(ptr, 'u', 3));
	return (0);
}
