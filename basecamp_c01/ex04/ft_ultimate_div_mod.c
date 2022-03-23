#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int store_a_value = *a;
	int store_b_value = *b;

	*a = store_a_value / store_b_value;
	*b = store_a_value % store_b_value;
}

int	main()
{
	int a = 105;
	int b = 50;

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);

	return (0);
}