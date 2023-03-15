/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:33:11 by fatdiall          #+#    #+#             */
/*   Updated: 2022/12/07 20:55:53 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	a[5] = "first";
	char	b[6] = "second";
	int		i;

	a[5] = "first";
	b[6] = "second";
	ft_strcpy(a, b);
	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}
*/
