/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:13:32 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 19:48:35 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	taille(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_special(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else
		return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	char	*sfinal;
	int		c;
	int		is_negative;

	is_negative = 0;
	c = taille(n);
	if (n == -2147483648 || n == 0)
		return (ft_special(n));
	sfinal = malloc(sizeof(char) * (c + 1));
	if (sfinal == NULL)
		return (NULL);
	sfinal[c--] = '\0';
	if (n < 0)
		is_negative = 1;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		sfinal[c--] = n % 10 + '0';
		n = n / 10;
	}
	if (is_negative == 1)
		sfinal[0] = '-';
	return (sfinal);
}
