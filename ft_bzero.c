/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:02:48 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 14:02:51 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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