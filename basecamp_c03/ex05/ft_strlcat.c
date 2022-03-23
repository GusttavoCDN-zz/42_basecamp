#include <unistd.h>

char *rev_print(char *str)
{
	int i;
	int j;
	int len;
	char *tmp;

	i = 0;
	j = 0;
	len = 0;
	tmp = str;

	while (str[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}

	return (tmp);
}

int    main(void)
{
    rev_print("rainbow dash");
    write(1, "\n", 1);
    rev_print("Ponies are awesome");
    write(1, "\n", 1);
    rev_print("");
    write(1, "\n", 1);
    write(1, ".", 1);
    return (0);
}