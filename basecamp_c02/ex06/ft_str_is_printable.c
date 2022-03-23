#include <stdio.h>

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    if (str[index] < 33 || str[index] > 126)
    {
      return (0);
    }
    index++;
  }
  return (1);
}

int main()
{
  printf("%d\n", ft_str_is_printable("adads a!"));
}