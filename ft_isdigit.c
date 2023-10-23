/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:13:13 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:13:17 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/
/* Cette fonction sert à voir si le 
paramètre mis est un caratère chiffre entre 0-9*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* mais à utiliser ne prends pas en compte le nom du programme
pour essayer tous les caractères n'oublie pas les "" 
lors de l'execution du programme*/

/*int	main(int argc, char ** argv)
{
	int	i;
	int j;

	i = 1;
	while(argv[i] != NULL)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			printf("%d\n",ft_isalpha((int)argv[i][j]));
			j++;
		}
		i++;
	}

}*/