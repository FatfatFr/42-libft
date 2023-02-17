/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:52:02 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 15:21:32 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		bzero(ptr, total_size);
	}
	return (ptr);
}

/*int	main(void)
{
	int	i;
	char			*test;

	i = 0;
	test = (char *)ft_calloc(5, sizeof(char));
	if (test)
	{
		while (i < 5)
		{
			test[i] = 'a';
			i++;
		}
		return (0);
	}
}*/
