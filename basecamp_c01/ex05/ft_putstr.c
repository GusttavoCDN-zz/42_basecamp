#include <unistd.h>

void mostra_string(char *string)
{
	int contador;

	contador = 0;

	while (string[contador] != 0)
	{
		write(1, "To contando", 11);
		contador++;
	}
}


int	main()
{
	char	string[] = "Gabriel";
	char string2[] = "Fran";

	mostra_string(string);

	return (0);
}