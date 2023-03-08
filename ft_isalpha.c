/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:43:23 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/08 18:54:23 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'b';
	isalpha(c);
	printf("%i\n", c);
	ft_isalpha(c);
	printf("%i\n", c);
	return (0);
}*/


/*void  ft_putnbr_fd(int n, int fd)
{
        char    buffer[11];
        int             i;

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
}*/

/*
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
