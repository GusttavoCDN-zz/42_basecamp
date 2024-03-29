#include <unistd.h>

static unsigned int check_base(char *base)
{
  unsigned int i;
  unsigned int j;

  i = 0;
  while (base[i] != '\0')
  {
    j = 0;
    while (j < i)
      if (base[j++] == base[i])
        return (0);
    if (base[i] == '-' || base[i] == '+')
      return (0);
    ++i;
  }
  return (i);
}

void ft_putnbr_base(int nb, char *base)
{
  char c;
  unsigned int div;
  unsigned int num;
  unsigned int basen;

  if ((basen = check_base(base)) < 2)
    return;
  if (nb < 0)
    write(1, "-", 1);
  num = nb < 0 ? (-1) * nb : nb;
  div = 1;
  while (num / basen)
  {
    num /= basen;
    div *= basen;
  }
  num = nb < 0 ? (-1) * nb : nb;
  while (div)
  {
    c = base[num / div];
    write(1, &c, 1);
    num = num % div;
    div = div / basen;
  }
}