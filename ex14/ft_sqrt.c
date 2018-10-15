/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:37:56 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/10 18:55:43 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 0)
		nb *= -1;
	while (sqrt * sqrt != nb)
	{
		if (nb < sqrt * sqrt)
			return (0);
		sqrt++;
	}
	return (sqrt);
}
/*
**int	main(void)
**{
**	int	i;
**	int y;
**
**	i = 42044357;
**	y = ft_sqrt(i);
**	printf("Srt %d = %d",i, y);
**
**	return (0);
**}
*/
