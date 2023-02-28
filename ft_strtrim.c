/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:03:15 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/26 16:09:05 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// length s1 ?
// finding white space ?
// from end-1 -- != white space

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	src_len;
	int	i;

	src_len = strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	result = NULL;
	start = 0;
	end = strlen(s1);
	len = end - start + 1;
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(len);
	if (!result)
	{	
		return (NULL);
	}
	ft_strlcpy(result, s1 + start, len + 1);
	result[end - start] = '\0';
	return (result);
}

/*int	main(void)
{
	char	test[] = "   letstewt   ";
	char	set[] = "tw ";

	printf("%s\n", ft_strtrim(test, set));
	return (0);
}*/
