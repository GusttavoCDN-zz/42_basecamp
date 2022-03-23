#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int ft_atoi(char *str)
{
	int sign;
	int num;

	while (*str <= 32)
		str++;
	sign = 1;

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num = num + *str - '0'; // Faz a conversão do char para inteiro;
		str++;
	}

	return (num * sign);
}

int main()
{
	printf("Pirata: %d\n", ft_atoi("480"));
	printf("Pirata: %d\n", ft_atoi("   -405486"));
	printf("Pirata: %d\n", ft_atoi("  dsad5486"));
	printf("Pirata: %d\n", ft_atoi("  -5486dsadas"));
	return 0;
}