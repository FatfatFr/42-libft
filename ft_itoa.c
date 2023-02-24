#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int n)
{
    int     sign = (n < 0) ? -1 : 1;
    int     len = 1;
    int     tmp = n;

    while (tmp /= 10)
        len++;
    len += (sign == -1) ? 1 : 0;
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    n = (n < 0) ? -n : n;
    while (len--)
    {
        str[len] = (n % 10) * sign + '0';
        n /= 10;
    }
    if (sign == -1)
        str[0] = '-';
    return (str);
}

int   main(void)
{
    int     i;
    char    *test;

    i = -2147483648;
    test = ft_itoa(i);
    printf("%s\n", test);
    free(test);
    return (0);
}
