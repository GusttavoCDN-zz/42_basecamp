#include <unistd.h>
#include <stdio.h>


const char	g_hex[] = "0123456789abcdef";

void	ft_putstr_non_printable(char *str)
{  
	char	new[3];

	new[0] = '\\'; // Setao a barra invertida como padrão na exibição;
	while (*str)
	{
		if (*str < 32 || *str > 127)
		{					        
			new[1] = g_hex[*str / 16]; // Pega o valor de cada caracter em hexadecimal;
			new[2] = g_hex[*str % 16]; // Pega o valor de cada caracter em hexadecimal - No caso o modulo de numeros menores que o 16 irão resultar no proprio numero passado;
			write(1, new, 3);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

int main()
{
  char *s1 = "Curso de C\n";
  char *s2 = "Curso de Java\n\t";

  ft_putstr_non_printable(s1);
  ft_putstr_non_printable(s2);

  return 0;
}
