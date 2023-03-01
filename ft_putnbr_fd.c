/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:12:15 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/01 18:26:58 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[11];
	int	i;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	i = 0;
	while (n > 9)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	buffer[i] = n + '0';
	while (i >= 0)
		write(fd, &buffer[i--], 1);
}

/*int	main(void)
{
	int	n = 15;
	int	i;

	i = 1;
	ft_putnbr_fd(n, i);
}*/
