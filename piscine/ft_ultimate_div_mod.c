/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:06:36 by fatdiall          #+#    #+#             */
/*   Updated: 2022/12/06 08:04:58 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	temp_div;

	temp_div = *a / *b;
	*b = *a % *b;
	*a = temp_div;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 6;
//	b = 2;
//	ft_ultimate_div_mod(&a, &b);
//	if (a == 3 && b == 0)
//	{
//		write(1, "ok\n", 3);
//	}
//	else
//	{
//		write(1, "Fail", 4);
//	}
//}
