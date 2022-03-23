#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i_dest;
  unsigned int i_src;

  i_dest = 0;
  while (dest[i_dest])
    i_dest++;
  i_src = 0;
  while (src[i_src] && i_src < nb)
  {
    dest[i_dest] = src[i_src];
    i_dest++;
    i_src++;
  }

  dest[i_dest] = '\0';

  return (dest);
}

int main(void)
{
  char name[7] = "Naruto";
  char name2[7] = "Sasuke";
  char name3[7] = "Sakura";
  char name4[8] = "Kakashi";
  char name5[1] = "";
  char* dest;

  ft_strncat(name, name2, 9);
  printf("Resultado Pirata: %s\n", name);
  
  // dest = strncat(name, name2, 3);
  // printf("Resultado Original: %s\n", dest);
}