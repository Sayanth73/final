/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:15:30 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/26 20:48:11 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcast;
	char	*srccast;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dstcast = (char *)dst;
	srccast = (char *)src;
	i = 0;
	if (dstcast > srccast)
	{
		while (len-- > 0)
			dstcast[len] = srccast[len];
	}
	else
	{
		while (i < len)
		{
			dstcast[i] = srccast[i];
			i++;
		}
	}
	return (dst);
}
