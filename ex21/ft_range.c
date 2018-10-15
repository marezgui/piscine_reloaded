/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 02:30:02 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/11 10:14:09 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
**int	main(void)
**{
**	int *tab;
**	int i;
**
**	i = 0;
**	tab = ft_range(2,5);
**	while (i < 3)
**	{
**		printf("tab[%d] = %d",i, tab[i]);
**		i++;
**	}
**	return (0);
**}
*/
