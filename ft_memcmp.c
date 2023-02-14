/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:42 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/14 17:33:54 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num) 
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (const unsigned char *)ptr1;
 	p2 = (const unsigned char *)ptr2;
	while (num-- > 0) 
	{
		if (*p1++ != *p2++) 
		{
			return *(p1 - 1) - *(p2 - 1);
		}
	}
	return (0);
}

int	main(void)
{
	char	one[] = "";
	char	two[] = "";
	return (0);
}
