#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
  
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    if (str[index] >= 'a' && str[index] <= 'z')
    {
      str[index] = str[index] - 32;
    }
    index++;
  }

  return str;

}


int		main(void)
{
  char str[] = "gustavo da silva amaral santos!?*&$#@";
  printf("%s\n", ft_strupcase(str));
  return (0);
}