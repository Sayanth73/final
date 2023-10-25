#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*final;
	int		i;

	final = malloc(sizeof(char) *  ft_strlen(s) + 1);
	if (final == NULL)
		return (NULL);
	i = 0;
	f(i, &s[i]);
