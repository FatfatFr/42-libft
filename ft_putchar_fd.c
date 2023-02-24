#include <stdio.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
   write(fd, &c, 1);
}

int	main(void)
{
	char *test = "l";
	int	i;
	
	i = 1;
	ft_putchar_fd(test[0], i);
	return (0);
}
