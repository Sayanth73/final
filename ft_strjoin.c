/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:20 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*retour;

	j = 0;
	i = 0;
	retour = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (retour == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		retour[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != '\0')
		retour[i++] = (char)s2[j++];
	retour[i] = '\0';
	return (retour);
}
