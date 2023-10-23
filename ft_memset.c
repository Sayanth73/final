#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main(void)
{
	void *b1[100] = {0};
	size_t taille = 0;
	int a = 65;
	printf("résultat fonction perso\n%s\n", 
	(unsigned char *)ft_memset(b1, a, taille));
	printf("résultat fonction c\n%s\n", 
	(unsigned char *)memset(b1, a, taille));
	taille = 98;

	printf("résultat fonction perso\n%s\n",
	(unsigned char *)ft_memset(b1, a, taille));
	printf("résultat fonction c\n%s\n", 
	(unsigned char *)memset(b1, a, taille));
	taille = 100;

	printf("résultat fonction perso\n%s\n", 
	(unsigned char *)ft_memset(b1, a, taille));
	printf("résultat fonction c\n%s\n", 
	(unsigned char *)memset(b1, a, taille));

	
}*/