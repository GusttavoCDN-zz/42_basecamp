#include <stdio.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    if ((str[index] < 'a' || str[index] > 'z') && (str[index] < 'A' || str[index] > 'Z'))
      return (0);
    index++;
  }

  return (1);
}

int main()
{
  char string[] = "dadadasdsa012asdsda";

  printf("%d", ft_str_is_alpha(string));
}

