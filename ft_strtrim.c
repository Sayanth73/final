/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:22:02 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/24 20:49:49 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

static int	ft_numberofcharacter(char const *set, char const *s1)
{
	int	i;
	int	endset;
	int	start;

	i = 0;
	while (set_check(set, s1[i]) == 1)
		i++;
	start = i;
	if (s1[i] == '\0')
		return (0);
	i = ft_strlen(s1) - 1;
	while (set_check(set, s1[i]) == 1)
		i--;
	endset = i;
	return (endset - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		taille;
	char	*sfinal;

	taille = ft_numberofcharacter(set, s1);
	sfinal = malloc(sizeof(char) * taille + 1);
	if (sfinal == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (set_check(set, s1[i]) == 1)
		i++;
	while (k < taille)
		sfinal[k++] = (char)s1[i++];
	sfinal[k] = '\0';
	return (sfinal);
}
