/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:09:42 by sshanmug          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:24 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (count + 1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*cas(int c)
{
	if (c == 0)
		return (ft_strdup("0"));
	else
		return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	char	*retour;
	int		is_negative;
	int		taille;

	if (n == -2147483648 || n == 0)
		return (cas(n));
	taille = counter(n) + 1;
	is_negative = 1;
	retour = malloc(taille);
	if (retour == NULL)
		return (NULL);
	if (n < 0)
	{
		is_negative *= -1;
		n *= -1;
	}
	retour[--taille] = '\0';
	while (n != 0)
	{
		retour[--taille] = (n % 10) + 48;
		n = n / 10;
	}
	if (is_negative < 0)
		retour[0] = '-';
	return (retour);
}
/**
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1223));
	printf("%s\n", ft_itoa(312131));
}
*/
