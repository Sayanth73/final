/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:02:48 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 14:02:51 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/
/*cette fois si c'est pour vérifier si il est soit 
une lettre alphabétique soit numeriquer 
donc jutilise les 2 fonctions que jai deja fait*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

/* mais à utiliser ne prends pas en compte le nom du programme
pour essayer tous les caractères n'oublie pas les "" 
lors de l'execution du programme

int	main(int argc, char ** argv)
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

}
*/