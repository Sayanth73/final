/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:13:42 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:29:40 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1cast;
	unsigned char	*s2cast;

	i = 0;
	s1cast = (unsigned char *) s1;
	s2cast = (unsigned char *) s2;
	while (i < n)
	{
		if (s1cast[i] != s2cast[i])
			return (s1cast[i] - s2cast[i]);
	i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	size_t l = 3;
	char	tab[20] = "le prince est née";
	char	tab2[20] = "le roi est mort";
	printf("%d", ft_memcmp(tab, tab2, l));
}*/