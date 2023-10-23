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
/*cette fonction sert à déterminer 
si le caractère est une lettre alphabétique
si elle l'est elle retourne 1
sinon elle retourn 0*/
int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
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
