/*#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	taille;
	int	i;

	taille = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			taille++;
			while (s[i++] == c)
			i++;
		}
		if (s[i] == '\0')
			taille++;
		else 
			i++;
	}
	return (taille);
}

Je peux pas faire ca tout simplement mieux vaut que je
x tente de compter les mots ...
*/