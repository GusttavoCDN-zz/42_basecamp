#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{  
  if (nb == 0)
    return (1);
  if (nb < 0)
    return (0);
  
  return (nb * ft_recursive_factorial(nb - 1)); // p loop é chamado diversas vezes diminuindo o valor de nb até chegar a 0 quando ira retornar 1 e voltar fazendo as operaçoes dos valores guardados em nb.
}

int main()
{
  printf("%d\n", ft_recursive_factorial(5));
}