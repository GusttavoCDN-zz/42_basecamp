#include <stdio.h>


char  *ft_strcpy(char *dest, char *src);

char  *ft_strcpy(char *dest, char *src)
{
  int index;

  index = 0;
  while(src[index] != '\0')
  {
    dest[index] = src[index];
    index++;
  }

  dest[index] = '\0';

  return dest;
}

int main()
{
  
  char dest[2];
  char src[] = "GUSTAVO";
  printf("%s\n", dest);
  char *teste = ft_strcpy(dest, src); // A string de destino deve ter espaço o suficiente para abrigar a string de origem.

  
  printf("%s\n", dest);
  printf("%p\n", src);
}