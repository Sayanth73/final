/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:14:34 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:14:35 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	taille;
	char	*retour;

	taille = ft_strlen(s1) + 1;
	retour = malloc(sizeof(char) * taille);
	if (retour == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		retour[i] = s1[i];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}

/*
#include <stdio.h>
int main(void)
{
	char tableau1[100] = "essai numéro 12";
	printf("Avant l'utilisation de la fonction\n%s\n", tableau1);
	printf("Après l'utilisation de la fonction\n%s\n", ft_strdup(tableau1));
}*/