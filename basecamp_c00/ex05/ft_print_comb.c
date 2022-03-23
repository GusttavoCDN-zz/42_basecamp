#include <unistd.h>

void ft_print_comb(void);
void write_in(char c, char d, char u);

void write_in(char c, char d, char u)
{
  write(1, &c, 1);
  write(1, &d, 1);
  write(1, &u, 1);
  if (c == '7' && d == '8' && u == '9')
    return;
  write(1, ", ", 2);
}

void ft_print_comb(void)
{
  char centena;
  char dezena;
  char unidade;

  while (centena <= '9')
  {
    dezena = centena + 1;
    while (dezena <= '9')
    {
      unidade = dezena + 1;
      while (unidade <= '9')
      {
        write_in(centena, dezena, unidade);
        unidade = unidade + 1;
      }
      dezena = dezena + 1;
    }
    centena = centena + 1;
  }
}
