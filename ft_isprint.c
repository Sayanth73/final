/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:13:25 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:13:27 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
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
