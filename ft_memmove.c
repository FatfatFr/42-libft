/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:51:12 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/09 14:56:25 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, int n)
{
	const unsigned char	*ptrs;
	unsigned char		*ptrd;
	int					i;

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

int	main(void)
{
	char	source[] = "source";
	char	dest[] = "thedest";

	ft_memmove(dest, source, 5);
	printf("%s\n", dest);
	return (0);
}

/*When memories overlap, the function memmove handles the overlapping

char	str[100] = "Learningisfun";
char	*first, *second;

	first = str;
	second = str;
	printf("Original string : %s\n ", str);

	memmove(second + 8, first, 10);	
	printf("memmove overlap : %s\n ", str);

Output :
	
	Original string : Learningisfun
	memmove overlap : LearningLearningis

ps : on memmcopy, it would've occured an error 
as memcpy does not handle overlapping memmory.
*/
