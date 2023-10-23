#include "libft.h"

int taille(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return(2);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n > 0)
	{
		while(n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *sfinal;
	int c;
	int is_negative;

	is_negative = 0;
	if (n == -2147483648)
        return (ft_strdup("-2147483648"));
	c = taille(n);
	sfinal = malloc(sizeof(char) * (c + 1));
	if (sfinal == NULL)
		return (NULL);
	if (n != 0)sfinal[c] = '\0';
	c--;
	if (n == 0)
	{
		sfinal[0] = '0';
		return sfinal;
	}
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	while (n > 0)
	{
		sfinal[c] = n % 10 + '0';
		n = n / 10;
		c--;
	}
	if (is_negative == 1)
		sfinal[0] = '-';
	return (sfinal);
}