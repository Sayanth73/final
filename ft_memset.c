/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:57 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*s;
	unsigned char	d;
	size_t			i;

	s = (char *)b;
	i = 0;
	d = (unsigned char)c;
	while (i < len)
	{
		s[i] = d;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0;
	int s[19] = {0};
	int c = 1233;
	memset(s, c, 4 * (int) + 1);
	while (s[i] != 0)
	{
		printf("%d", s[i]);
		i++;
	}
}*/
