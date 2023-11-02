/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:08 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(const char *s, int i, size_t taille)
{
	size_t		j;
	char		*retour;

	retour = malloc(taille + 1);
	if (retour == NULL)
		return (NULL);
	j = 0;
	while (j < taille)
	{
		retour[j] = s[i];
		i++;
		j++;
	}
	retour[j] = '\0';
	return (retour);
}

char	**ft_split(char const *s, char c)
{
	char	**tableau;
	int		deplachaine;
	int		startword;
	int		i;

	i = 0;
	tableau = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (tableau == NULL)
		return (NULL);
	deplachaine = 0;
	while (s[deplachaine] != '\0')
	{
		while (s[deplachaine] == c && s[deplachaine] != '\0')
			deplachaine++;
		startword = deplachaine;
		while (s[deplachaine] != c && s[deplachaine] != '\0')
			deplachaine++;
		if (deplachaine != startword)
			tableau[i++] = ft_strndup(s, startword, (deplachaine - startword));
	}
	tableau[i] = NULL;
	return (tableau);
}
/*
#include <stdio.h>
int main (void)
{
	char tab[100] = "asa sasa a";
	printf("%d\n", countword(tab, 32));
	printf("%d\n", countletter(tab + 3, 32));
}*/
