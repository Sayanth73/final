/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:25 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*retour;

	retour = malloc(count * size);
	if (retour == NULL)
		return (NULL);
	ft_bzero(retour, count * size);
	return ((void *)retour);
}
/*
#include <stdio.h>
int main(void)
{
	int	i = 0;
	char *test1 = ft_calloc(10, 1);
	printf("%s\n",test1);
	while (i < 1)
	{
		test1[i] = 65;
		i++;
	}
	printf("%s\n", test1);
}*/
