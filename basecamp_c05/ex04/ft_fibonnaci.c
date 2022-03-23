#include <stdio.h>

// FN = (FN - 1) + (FN - 2)
int	ft_fibonnaci(int index)
{  
  if (index < 0)
    return (-1);
  if (index == 0)
    return (0);
  if (index == 1)
    return (1);

  return (ft_fibonnaci(index - 1) + ft_fibonnaci(index - 2));
}

int main()
{
  #include <stdio.h>
  printf("%d\n", ft_fibonnaci(6));
}
