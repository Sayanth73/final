/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:47 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sfinal;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sfinal = malloc(1);
		if (sfinal)
			sfinal[0] = '\0';
		return (sfinal);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sfinal = malloc(sizeof(char) * (len + 1));
	if (sfinal == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		sfinal[i++] = s[start++];
	}
	sfinal[i] = '\0';
	return (sfinal);
}
/*
#include <stdio.h>
int main(void)
{
	char tab[100] = "Le roi est mort";
	printf("%s\n", ft_substr(tab, 3, 5));
}*/
