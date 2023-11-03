/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:14 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	retour;

	retour = 0;
	i = 0;
	negative = 1;
	while (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				negative *= -1;
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			retour = (retour * 10) + (str[i] - 48);
			i++;
		}
		break ;
	}
	return (retour * negative);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main (int argc, char **argv)
{
	if (argc == 2)
	{
	printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_atoi(argv[1]));
	}
	return (0);
}*/
