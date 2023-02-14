/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:53 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/14 16:04:47 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int	main(void)
{
	printf("%c\n", ft_toupper('b'));
	return (0);
}
