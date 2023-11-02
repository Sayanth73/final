/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:44 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*retour;
	size_t			i;

	i = 0;
	retour = (unsigned char *)s;
	while (i < n)
	{
		if (retour[i] == (unsigned char)c)
			return ((void *) retour + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char tab[100] = "LE roi est mort hier";
	printf("%s\n", (char *) ft_memchr(tab, (char)109, 12));
}*/
