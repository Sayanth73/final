/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:24 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	savedst;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	savedst = ft_strlen(dst);
	if (dstsize - 1 < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = dst[i];
		i++;
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	if (src[j] != '\0')
		return (savedst + ft_strlen(src));
	return (ft_strlen(dst));
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char tab[12] = "";
	char tab2[30] = " La paix est de retour";
	char tab3[12] = "";
	char tab4[30] = " La paix est de retour";
	printf("%lu\n%s\n", strlcat(tab, tab2, 0), tab);
	printf("%lu\n%s\n", ft_strlcat(tab3, tab2, 0), tab3);
}*/
