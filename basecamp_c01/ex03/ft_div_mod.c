#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
  *mod = a % b;
}

int main()
{
  
  int div;
  int module;
  
  ft_div_mod(65, 10, &div, &module);

  printf("%d\n", div);
  printf("%d\n", module);

  return (0);
}