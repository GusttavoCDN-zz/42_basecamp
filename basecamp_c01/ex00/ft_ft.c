#include <stdio.h>
#include <stdlib.h>


void  ft_ft(int *nbr);

void  ft_ft(int *nbr)
{
  *nbr = 42;
}

int main()
{
  int number = 15;

  int *ponteiro = &number;

  printf("%p\n", ponteiro);
  printf("%d", *ponteiro);
}