/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:30:56 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/10 19:54:07 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int f;

	f = 1;
	if (nb > 1)
	{
		while (nb > 1)
		{
			f *= nb;
			nb--;
		}
	}
	if (nb < 0)
		return (0);
	return (f);
}
/*
**int	main(void)
**{
**	int fact;
**	int result;
**
**	fact = 4;
**	result = 0;
**	result = ft_iterative_factorial(fact);
**	printf("fact %d  = %d",fact, result);
**
**	return(0);
**}
*/
