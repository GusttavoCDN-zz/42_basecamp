#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void  ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
}

int main()
{
  int number = 402;
  int *pNumber = &number;
  int **ppNumber = &pNumber;
  int ***pppNumber = &ppNumber;
  int ****ppppNumber = &pppNumber;
  int *****pppppNumber = &ppppNumber;
  int ******ppppppNumber = &pppppNumber;
  int *******pppppppNumber = &ppppppNumber;
  int ********ppppppppNumber = &pppppppNumber;

  printf("Valor em number: %d\n", number);
  ft_ultimate_ft(&ppppppppNumber);
  printf("%d\n", *pNumber);
  printf("%d\n", **ppNumber);
  printf("%d\n", ***pppNumber);
  printf("%d\n", ****ppppNumber);
  printf("%d\n", *****pppppNumber);
  printf("Valor em number: %d\n", number);
  return 0;
}