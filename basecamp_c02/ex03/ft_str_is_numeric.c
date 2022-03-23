#include <stdio.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    if (str[index] < '0' || str[index] > '9')
    {
      return (0);
    }
    index++;
  }
  return (1);
}

int main()
{
  printf("%d\n", ft_str_is_numeric("123a45"));
}