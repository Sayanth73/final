/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:18 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, 0, n));
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0;
	char s[19] = {2};
	ft_bzero(s, 19);
	char s2[19] = {1};
	bzero(s2, 19);
	
	while (i < 19)
	{
		if (s[i] == s2[i])
			printf("pareil cest carré\n");
		else 
			printf("ya une galere\n");
	i++;
	}
}*/
