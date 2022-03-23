#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
  while (*s1)
  {
    if (*s1 != *s2) // Verifica se os caracteres são iguais, caso não, faz a comparação entre eles.
    {
      break;
    }
    s1++;
    s2++;
  }

  char s1_end = (const unsigned char) *s1;
  char s2_end = (const unsigned char) *s2;

  return s1_end - s2_end;

}


int main()
{
  char string[] = "Gustavo";
  char string2[] = "Gustavo";
  int testePirata = ft_strcmp(string, string2);
  int testeOriginal = strcmp(string, string2);

  printf("String 01: %s | String 02: %s | Resultado Pirata: %d | Resultado Original: %d\n", string, string2, testePirata, testeOriginal);

  char string3[] = "";
  char string4[] = "";
  int testePirata2 = ft_strcmp(string3, string4);
  int testeOriginal2 = strcmp(string3, string4);

  printf("String 03: %s | String 04: %s | Resultado Pirata: %d | Resultado Original: %d\n", string3, string4, testePirata2, testeOriginal2);

  char string5[] = "Um ninja nunca volta atras com sua palavra";
  char string6[] = "Um ninja nunca volta com sua palavra";
  int testePirata3 = ft_strcmp(string5, string6);
  int testeOriginal3 = strcmp(string5, string6);

  printf("String 05: %s | String 06: %s | Resultado Pirata: %d | Resultado Original: %d\n", string5, string6, testePirata3, testeOriginal3);

  char string7[] = "P";
  char string8[] = "B";
  int testePirata4 = ft_strcmp(string7, string8);
  int testeOriginal4 = strcmp(string7, string8);

  printf("String 07: %s | String 08: %s | Resultado Pirata: %d | Resultado Original: %d\n", string7, string8, testePirata4, testeOriginal4);
 
}