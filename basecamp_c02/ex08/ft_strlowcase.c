#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
  
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    if (str[index] >= 'A' && str[index] <= 'Z')
    {
      str[index] = str[index] + 32;
    }
    index++;
  }

  return str;

}


int		main(void)
{
  char str[] = "GDGADADDADADAos!?*&$#@";
  printf("%s\n", ft_strlowcase(str));
  return (0);
}