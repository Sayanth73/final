#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstcast;
	unsigned char	*srccast;
	size_t			i;

	dstcast = (unsigned char *)dst;
	srccast = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		i++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	printf("avec un tableau de char\n");
	char tabi[100];
	char tabi2[100];
	size_t q = 2;
	const char tab[100] = "asdkpasd";
	const char tab2[100] = "asdkpasd";
	printf("état initial avant la fonction perso 
	: \n%s\n",((unsigned char *)tab));
	printf("état initial avant la fonction C: 
	\n%s\n",((unsigned char *)tab2));
	printf("l'état final après la fonction perso :
	\n%s\n",tabi);
	printf("l'état final après la fonction C 
	:\n%s\n",tabi2);
	ft_memcpy(tabi, tab, q);
	memcpy(tabi2, tab, q);
	printf("l'état final après la fonction perso :\n%s\n",tabi);
	printf("l'état final après la fonction C :\n%s\n",tabi2);

	printf("avec un tableau d'int\n");
	int tabi3[100];
	int tabi4[100];
	size_t a = 12;
	const int tab3[100] = {2,31,3,12,312,312};
	const int tab4[100] = {2,32,3,2,34,3};
}*/