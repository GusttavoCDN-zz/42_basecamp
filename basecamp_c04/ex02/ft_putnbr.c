#include <unistd.h>

void ft_putnbr(int nb);

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10); // Recursividade, entra na callstack e chama os resultados de trás para frente
	ft_putchar(nb % 10 + '0');
}


int main()
{
  ft_putnbr(-2147483647);
  write(1, "\n", 1);
  ft_putnbr(1453);
  write(1, "\n", 1);
  ft_putnbr(892);
  write(1, "\n", 1);
  ft_putnbr(450);
}