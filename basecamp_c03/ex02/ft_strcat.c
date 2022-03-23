#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src)
{
  unsigned int dest_index;
  unsigned int src_index;

  dest_index = 0;
  while (dest[dest_index])
    dest_index++;
  
  src_index = 0;
  while (src[src_index])
  {
    dest[dest_index] = src[src_index];
    dest_index++;
    src_index++;
  }

  dest[dest_index] = '\0';

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

  ft_strcat(name, name2);
  printf("Resultado Pirata: %s\n", name);
  
  // dest = strcat(name, name2);
  // printf("Resultado Original: %s\n", dest);
}