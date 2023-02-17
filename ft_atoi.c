/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:15 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/17 13:06:55 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	alpha;
	int	beta;

	alpha = 0;
	beta = 1;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
	{
		str++;
	}
	if (*str == '-')
	{
		beta *= -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		alpha = alpha * 10 + *str++ - 48;
	}
	return (alpha * beta);
}

/*int main(void)
{  
 	char	str[] = "012345";

	printf("%d\n", atoi(str) + 1);
	return (0);
}*/
