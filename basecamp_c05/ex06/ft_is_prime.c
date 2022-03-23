#include <stdio.h>

// int ft_is_prime(int nb)
// {
  
//   int prime_is_not_divisible_by_two;

//   prime_is_not_divisible_by_two = 2;

//   while (nb % prime_is_not_divisible_by_two != 0 && (prime_is_not_divisible_by_two < nb))
//     prime_is_not_divisible_by_two++;
//   if (prime_is_not_divisible_by_two == nb)
//     return (1);
//   return (0);
// }

int	ft_is_prime2(int nb)
{
	int index;

	if (nb == 0 || nb == 1)
		return (0);

	index = 2;
	while (index <= nb / 2) // Assim eu pego um intervalo na metade do número passado como parametro, pois se não achar um número divisil por ele até lá, depois dessa faixa tbm não ira dar.
	{
		if (nb % index == 0)
			return (0);
		index++;
	}	
	return (1);
}

int main()
{
  #include <stdio.h>
  printf("%d\n", ft_is_prime2(11));
  printf("%d\n", ft_is_prime2(19));
  printf("%d\n", ft_is_prime2(2));
  printf("%d\n", ft_is_prime2(50));
  printf("%d\n", ft_is_prime2(57));

  return (0);
}