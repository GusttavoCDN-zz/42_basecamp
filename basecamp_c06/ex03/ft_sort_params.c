#include <stdio.h>
#include <unistd.h>

void  ft_sort_params(char **tab, int size);
void  ft_print_params(char *str);

int main(int argc, char **argv)
{
  ft_sort_params(argv, argc);
  while (0 < argc - 1)
  {
    ft_print_params(argv[argc - 1]); // Esta pegando os argumentos de tras para frente, oque resulta no retorno das strings em ordem alfabetica.
    argc--;
  }

  return (0);
}

void  ft_print_params(char *str)
{
  int index;
  
  index = 0;
  while (str[index] != '\0')
  {
    write(1, &str[index], 1);
    index++;
  }
  write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void  ft_sort_params(char **tab, int size)
{
  int index;
  int index_two;
  char *aux_array;

  aux_array = "";
  index = 1;
  while (index < size)
  {
    index_two = 1; // Inicializado com 1, pois o primeiro argumento sempre é o nome do programa; O argumento 0
    while (index_two < size - index) // Para que o array rode apenas até chegar no segundo parametro, primeiro é o nome do programa//
    {
      if (ft_strcmp(tab[index_two], tab[index_two + 1]) < 0) // Avalia se a string na posição atual é maior que a da seguinte, caso não, troca as posiçoes;
      {
        aux_array = tab[index_two + 1];
        tab[index_two + 1] = tab[index_two];
        tab[index_two] = aux_array;
      }
      index_two++;
    }
    index++;
  }
}
