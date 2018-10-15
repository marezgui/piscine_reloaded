/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:06:45 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/08 11:15:39 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
			;
		else
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
**int	main(void)
**{
**	char *s1;
**	char *s2;
**
**	s1 = "177";
**	s2 = "777";
**	printf("ft = %d, strcmp = %d", ft_strcmp(s1, s2), strcmp(s1, s2));
**
**	return (0);
**}
*/
