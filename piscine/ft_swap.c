/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:03:48 by fatdiall          #+#    #+#             */
/*   Updated: 2022/12/05 17:02:37 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	interlude;

	interlude = *b;
	*b = *a;
	*a = interlude;
}

//int main(void)
//{
//	int a = 15;
//	int b = 20;
//
//	int *pointOnA = &a;
//	int *pointOnB = &b;
//	
//	printf("AVANT : A = %d et B = %d\n", a, b);
//	ft_swap(pointOnA, pointOnB);
//	printf("APRES : A = %d et B = %d\n", a, b);
//
//	return 0;
//}
