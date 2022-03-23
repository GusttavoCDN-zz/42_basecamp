#include <stdio.h>
#include <string.h>

  char  *ft_strstr(char *str, char *to_find)
  {
    int index;

    if (*to_find == 0)
      return (str);
    
    while (*str != 0)
    {
      if (*to_find == *str)
      {
        index = 0;
        while (to_find[index] == str[index] || to_find[index] == 0)
        {
          if (to_find[index] == 0)
          {
            return (str);
          }
          index++;
        }
      }
      str++;
    }

    return (0); // Is the same thing of NULL;
  }

int main()
{
  char *str = "Hello World";
  char *to_find = "r";
  char *pointeiro = ft_strstr(str, to_find);
  char *ponteiro2 = strstr(str, to_find);
  
  
  printf("%s\n", pointeiro);
  printf("%s\n", ponteiro2);
  return (0);
}