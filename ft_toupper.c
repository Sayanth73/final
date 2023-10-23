/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:15:13 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:15:14 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*
int main(void)
{
	int a = 67;
	write(1, &a, 1);
	write(1, "\n", 1);
	a = ft_toupper(a);
	write(1, &a, 1);
	write(1, "\n", 1);

	int b = 1213;
	write(1, &b, 1);
	write(1, "\n", 1);
	b = ft_toupper(b);
	write(1, &b, 1);
	write(1, "\n", 1);

	int l = 52 ;
	write(1, &l, 1);
	write(1, "\n", 1);
	l = ft_toupper(l);
	write(1, &l, 1);
	write(1, "\n", 1);

	int d = 98;
	write(1, &d, 1);
	write(1, "\n", 1);
	d = ft_toupper(d);
	write(1, &d, 1);
	write(1, "\n", 1);
}
*/