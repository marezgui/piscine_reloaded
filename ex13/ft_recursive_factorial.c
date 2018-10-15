/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:30:56 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/10 19:57:11 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		return ((nb) * ft_recursive_factorial(nb - 1));
	return (resultat);
}
/*
**int	main(void)
**{
**	int fact;
**	int result;
**
**	fact = -1;
**	result = ft_recursive_factorial(fact);
**	printf("fact %d = %d", fact, result);
**
**	return (0);
**}
*/
