/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:00:24 by fatdiall          #+#    #+#             */
/*   Updated: 2022/12/07 20:01:42 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char	a[5] = "first";
	char	b[10];
	int		n;
	int		i;

	n = '2';
	ft_strncpy(a, b, n);
	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}
*/
