/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:19:13 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/25 19:06:15 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int ft_countword(char const *s, char c)
{
	int	i;
	int	taille;

	taille = 0;
	i = 0;

	while (s[i] !='\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == '\0')
				taille++;

			if (s[i] == c)
			{
				taille++;
				i++;
			}
		}
	}
	return (taille);
}

static char *ft_strndup(const char *s, int i, size_t taille)
{
	size_t		j;
	char	*retour;

	retour = malloc(sizeof(char) * taille + 1);
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
char **ft_split(char const *s, char c)
{
	char	**tableau;
	int		deplachaine;
	int		startword;
	int		i;

	i = 0;
	tableau = malloc(sizeof(char *) * ft_countword(s, c) + 1);
	if (tableau == NULL)
		return (NULL);
	deplachaine = 0;
	while (s[deplachaine] !='\0')
	{
		while (s[deplachaine] == c && s[deplachaine] != '\0')
			deplachaine++;

		startword = deplachaine;

		while (s[deplachaine] != c && s[deplachaine] != '\0')
			deplachaine++;
		if (startword != deplachaine)  // Ensure the word is not empty
			tableau[i++] = ft_strndup(s, startword, (deplachaine - startword));
	}	
	tableau[i] = NULL;
	return (tableau);
}
