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
#include <stdlib.h>
#include <string.h>

static char    *fill_join(char *dst, char const *s2, unsigned int i, char *tmp)
{
    size_t            len;
    unsigned int    j;

    len = strlen(tmp);
    j = 0;
    while (j < len)
    {
        dst[i] = tmp[j];
        i++;
        j++;
    }
    if (tmp == s2)
        return (dst);
    return (fill_join(dst, s2, i, (char *)s2));
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t            size;
    char            *join;
    unsigned int    i;

    if (!s1 || !s2)
        return (NULL);
    size = strlen(s1) + strlen(s2);
    join = calloc(1, size + 1);
    if (!join)
        return (NULL);
    i = 0;
    fill_join(join, s2, i, (char *)s1);
    return (join);
}

int	main(void)
{
	char	first[] = "first";
	char	second[] = "second";

	char *funcstrjoin= ft_strjoin(first, second);
	printf("%s\n", funcstrjoin);
	return (0);
}

//output
//firstsecond
