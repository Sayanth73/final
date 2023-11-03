/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:26 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (ft_strlen(src) >= dstsize)
		return (ft_strlen(src));
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
	char tab[12] = "";
	char tab2[15] = "";
	char tab3[12] = "";
	char tab4[15] = "";
	printf("%lu\n", strlcpy(tab2, tab, 0));
	printf("%d\n", ft_strlcpy(tab4, tab3, 15));
	printf("%s\n", tab2);
	printf("%s\n", tab4);
	return (0);
}
*/
