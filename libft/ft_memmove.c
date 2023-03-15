/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:51:12 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/12 18:31:08 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, int n)
{
	const unsigned char	*ptrs;
	unsigned char		*ptrd;

	ptrs = src;
	ptrd = dest;
	if (ptrd < ptrs)
	{
		while (n--)
		{
			*ptrd++ = *ptrs++;
		}
	}
	else if (ptrd > ptrs)
	{
		while (n--)
		{
			ptrd[n] = ptrs[n];
		}
	}
	else
	{
		return (dest);
	}
	return (dest);
}

/*int	main(void)
{
	char	source[] = "source";
	char	dest[] = "thedest";

	ft_memmove(dest, source, 5);
	printf("%s\n", dest);
}
*/
