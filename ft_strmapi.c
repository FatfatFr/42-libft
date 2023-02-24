#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char   *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
   char *str;
   int i;

   i = 0;
   if (s == NULL || f == NULL)
      return (NULL);
   str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
   if (str == NULL)
      return (NULL);
   while (s[i] != '\0')
   {
      str[i] = f(i, s[i]);
      i++;
   }
   str[i] = '\0';
   return (str);
}

int main(void)
{
   const char *test = "hello";
   char *test2 = ft_strmapi(test, toupper);
    printf("%s\n", test2);
    free(test2);
    return (0);git
}
