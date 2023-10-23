/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:14:53 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:14:54 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
	char tab[100];
	printf("résultat fonction personnalisé %lu\n", ft_strlen(tab));
	printf("résultat fonction C %lu\n", strlen(tab));
	char tab2[100] = "ASASADAD";
	printf("résultat fonction personnalisé %lu\n", ft_strlen(tab2));
	printf("résultat fonction C %lu\n", strlen(tab2));
	char tab3[100] = "ASASADAD";
	printf("résultat fonction personnalisé %lu\n", ft_strlen(tab3));
	printf("résultat fonction C %lu\n", strlen(tab3));
	char tab4[100] = "ASASADADm1kmeqke1212   +*EKPDKOK";
	printf("résultat fonction personnalisé %lu\n", ft_strlen(tab4));
	printf("résultat fonction C %lu\n", strlen(tab4));
	char tab5[100] = {1,2,1,3,1,3,4,34,3,4,3,4,32,2,4};
	printf("résultat fonction personnalisé %lu\n", ft_strlen(tab5));
	printf("résultat fonction C %lu\n", strlen(tab5));

}
*/