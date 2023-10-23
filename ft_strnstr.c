#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char 	*pointeur;
	size_t	i;
	size_t	j;

	if (!*needle) 
    return ((char *)haystack);

	pointeur = (char *)haystack;
	i = 0;
	while(i < len && pointeur[i] != '\0')
	{
		
		if (pointeur[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && pointeur[i + j] == needle[j] && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *) haystack + i);
			
		}
		i++;
	}
	return (NULL);
}