/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:24:30 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/09 10:24:55 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[11];
	int		i;

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
i		write(fd, &buffer[i--], 1);
}

/*int	main(void)
{
	int	n = 17;
	int	i;
	i = 1;
	ft_putnbr_fd(n, i);
}

void    ft_putnbr_fd(int n, int fd)
{
    char    digits[10];
    int     sign = 1;
    int     i = 0;

    if (n == 0)
    {
        write(fd, "0", 1);
        return ;
    }
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }
    while (n > 0)
    {
        digits[i++] = (n % 10) + '0';
        n /= 10;
    }
    if (sign == -1)
    {
        write(fd, "-", 1);
    }
    while (--i >= 0)
    {
        write(fd, &digits[i], 1);
    }
}*/
