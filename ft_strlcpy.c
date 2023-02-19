/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:51:35 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 15:31:34 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int n)
{
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	i = 0;
	if (n > 0)
	{	
		while (i < n - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (src_len);
}

int	main(void)
{
	char	source[] = "functions";
	char	dest[5];
	int	n = sizeof(dest);
	int	len = ft_strlcpy(dest, source, n);

	printf("%u\n", len);
	return (0);
}
