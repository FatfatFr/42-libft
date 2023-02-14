/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:31:24 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/12 17:12:00 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	len;

	len = strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (0);
}

/*int	main(void)
{
	char	string[] = "Bonjourno";
	int	c = 'n';

	printf("%s", strrchr(string, c));
	return (0);
}*/
