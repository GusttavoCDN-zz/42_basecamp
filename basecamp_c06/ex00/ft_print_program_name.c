#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  
  int i;
  
  if (argc > 0)
  {
    i = 0;
    while (argv[0][i] != '\0')
    {
      write(1, &argv[0][i], 1);
      i++;
    }
    write(1, "\n", 1);
  }
}