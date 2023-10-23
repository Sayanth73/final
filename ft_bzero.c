#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <strings.h>
#include <stdio.h>
int main() {
    char str[10] = "Hello";
	char str2[10] = "Hello";

    printf("état initinal: \n%s\n", str);
    ft_bzero(str, 5);
	printf("après la fonction perso: \n%s\n", str);
	printf("état initinal: \n%s\n", str2);
    bzero(str2, 5);
	printf("après la fonction perso: \n%s\n", str2);



    return 0;
}
*/