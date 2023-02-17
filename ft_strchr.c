/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:26:37 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 13:03:56 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	n;

	n = c;
	while (*s != n)
	{
		if (!*s)
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}

/*int	main(void)
{
	char	string[] = "bonjour";
	int	c = 'c';

	printf("%s", ft_strchr(string, c));
	return (0);
}*/
