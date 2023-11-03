/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:11 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == (char)c)
			return ((s1 + i));
		i++;
	}
	if (s1[i] == (char)c)
		return (s1 + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char tab[100] = "Le roi est mort\0";
	char *tab2 = ft_strchr(tab, '\0');
	while (*tab2 != 'm')
	{
		tab2--;
		write(1, tab2, 1);
	}
}*/
