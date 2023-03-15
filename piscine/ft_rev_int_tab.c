/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:47:36 by fatdiall          #+#    #+#             */
/*   Updated: 2022/12/06 11:20:25 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_swap;
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		temp_swap = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = temp_swap;
		size--;
		i++;
	}
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		ft_putchar(tab[i] + 48);
		i++;
	}
}


int	main(void)
{
	int tab[6] = {5,10,28,34,49,55};

	ft_rev_int_tab(tab, 6);
	printf("%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}
*/
