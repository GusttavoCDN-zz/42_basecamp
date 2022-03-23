#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int assistant;
	i = 0;
	while (i < size)
	{
		assistant = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = assistant;
		i++;
		size--;
	}
}

int main()
{
	int matriz[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = sizeof(matriz) / sizeof(matriz[0]);
	ft_rev_int_tab(matriz, length);
	printf("%d\n", matriz[0]);
	printf("%d\n", matriz[1]);
	printf("%d\n", matriz[2]);
	printf("%d\n", matriz[3]);
	printf("%d\n", matriz[4]);
	printf("%d\n", matriz[5]);
	printf("%d\n", matriz[6]);
	printf("%d\n", matriz[7]);
	printf("%d\n", matriz[8]);
	return (0);
}