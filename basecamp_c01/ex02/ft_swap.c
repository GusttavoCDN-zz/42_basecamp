#include <stdio.h>
#include <stdlib.h>

void  ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
  int swap_assistant = *a;

  *a = *b;
  *b = swap_assistant;
}

int main()
{
  int number_one = 1;
  int number_two = 2;

  ft_swap(&number_one, &number_two);

  printf("%d\n", number_one);
  printf("%d\n", number_two);

  return (0);
}