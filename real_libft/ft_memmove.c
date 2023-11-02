/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:54 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcast;
	char	*srccast;

	if (src == NULL && dst == NULL)
		return (NULL);
	srccast = (char *)src;
	dstcast = (char *)dst;
	if (dstcast > srccast)
	{
		while (len > 0)
		{
			len--;
			dstcast[len] = srccast[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
