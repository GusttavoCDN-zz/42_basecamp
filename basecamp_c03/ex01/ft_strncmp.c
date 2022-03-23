#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
  while ((*s1 && *s2) && n > 1)
  {
    if (*s1 != *s2)
    {
      break ;
    }
    s1++;
    s2++;
    n--;
  }
  if (n == 0)
    return (0);
    
  return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main()
{
  char string[] = "Gustavo";
  char string2[] = "Gustavo";
  int testePirata = ft_strncmp(string, string2, 0);
  int testeOriginal = strncmp(string, string2, 0);

  printf("String 01: %s | String 02: %s | Resultado Pirata: %d | Resultado Original: %d\n", string, string2, testePirata, testeOriginal);

  char string3[] = "";
  char string4[] = "";
  int testePirata2 = ft_strncmp(string3, string4, 1);
  int testeOriginal2 = strncmp(string3, string4, 1);

  printf("String 03: %s | String 04: %s | Resultado Pirata: %d | Resultado Original: %d\n", string3, string4, testePirata2, testeOriginal2);

  char string5[] = "Um ninja nunca volta atras com sua palavra";
  char string6[] = "Um ninja nunca volta com sua palavra";
  int testePirata3 = ft_strncmp(string5, string6, 20);
  int testeOriginal3 = strncmp(string5, string6, 20);

  printf("String 05: %s | String 06: %s | Resultado Pirata: %d | Resultado Original: %d\n", string5, string6, testePirata3, testeOriginal3);

  char string7[] = "Um ninja nunca volta atras com sua palavra";
  char string8[] = "Um ninja nunca volta com sua palavra";
  int testePirata4 = ft_strncmp(string7, string8, 31);
  int testeOriginal4 = strncmp(string7, string8, 31);

  printf("String 07: %s | String 08: %s | Resultado Pirata: %d | Resultado Original: %d\n", string7, string8, testePirata4, testeOriginal4);
 
}