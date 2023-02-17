/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:24 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 13:06:17 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	const unsigned char	*p = ptr;
	int					i;

	i = 0;
	while (n > i)
	{
		if (*p == (unsigned char)value)
		{
			return ((void *)p);
		}
		n--;
		p++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	first[] = "toutounette";

	printf("%c\n", *(char *)memchr(first, 't', 3));
	return (0);
}*/
