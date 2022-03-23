#include <stdio.h>
#include <stdlib.h>

void    ft_sort_int_tab(int *tab, int size);

void    ft_sort_int_tab(int *tab, int size)
{
    int    i;
    int    y;
    int    assistant;

    i = 0;
    while (i < size)
    {
        y = i + 1;
        while (y < size)
        {
            if (tab[i] > tab[y])
            {
                assistant = tab[y];
                tab[y] = tab[i];
                tab[i] = assistant;
            }
            y++;
        }
        i++;
    }
}

int    main()
{
    int numbers[] = {9, 8, 5, 1, 4, 10, 100, 1000, 6, 7};

    ft_sort_int_tab(numbers, 10);
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%d\n", numbers[4]);
	printf("%d\n", numbers[5]);
	printf("%d\n", numbers[6]);
	printf("%d\n", numbers[7]);
	printf("%d\n", numbers[8]);
	printf("%d\n", numbers[9]);
    return (0);
}