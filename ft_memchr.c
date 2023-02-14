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

void	*ft_memchr(const void *ptr, int value, size_t num) 
{
	const unsigned char *p = (const unsigned char *)ptr;

	p = (const unsigned char *)ptr;
	while (num-- > 0) 
	{
		if (*p++ == (unsigned char)value) 
		{
			return (void *)(p - 1);
		}
	}
	return (NULL);
}

int	main(void)
{
	return (0);
}
