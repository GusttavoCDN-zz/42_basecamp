void ft_put_char(char c);
void ft_print_line(int x, char left_char, char char_middle, char right_char);
void rush(int x, int y);

void rush(int x, int y)
{
  int linhas;

  linhas = 0;
  while (linhas < y)
  {
    if (linhas == 0)
    {
      ft_print_line(x, 'A', 'B', 'A');
      ft_put_char('\n');
      linhas++;
      continue;
    }
    if (linhas == y - 1)
    {
      ft_print_line(x, 'C', 'B', 'C');
      ft_put_char('\n');
      return;
    }
    ft_print_line(x, 'B', ' ', 'B');
    ft_put_char('\n');
    linhas++;
  }
}

void ft_print_line(int x, char left_char, char char_middle, char right_char)
{
  int colunas;

  colunas = 0;
  ft_put_char(left_char);
  while (colunas < x - 1)
  {
    if (colunas == x - 2)
    {
      ft_put_char(right_char);
      return;
    }
    ft_put_char(char_middle);
    colunas++;
  }
}
