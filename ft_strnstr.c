/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:15:00 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:38:34 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pointeur;
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	pointeur = (char *)haystack;
	i = 0;
	while (i < len && pointeur[i] != '\0')
	{
		if (pointeur[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0'
				&& pointeur[i + j] == needle[j] && (i + j) < len)
				j++;
			if (needle[j] == '\0')
				return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}
