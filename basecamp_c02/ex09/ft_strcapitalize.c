#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char	*string;

	string = str;
	while (*string != '\0')
	{
		if (!((*(string - 1) >= 'A' && *(string - 1) <= 'Z')
				|| (*(string - 1) >= 'a' && *(string - 1) <= 'z')
				|| (*(string - 1) >= '0' && *(string - 1) <= '9')))
		{
			if (*string >= 'a' && *string <= 'z')
				*string = *string - 32;
		}
		else if ((*string >= 'A' && *string <= 'Z')
			|| (*string >= 'a' && *string <= 'z')
			|| (*string >= '0' && *string <= '9'))
		{
			if (*string >= 'A' && *string <= 'Z')
				*string = *string + 32;
		}
		string++;
	}
	return (str);
}


int main()
{
  char string[] = "oi, tudo   bem? 42palavras quarenta-e-duas; cinquenta+e+um-gatoro-gato! *dada";

  ft_strcapitalize(string);
  printf("%s\n", string);
}