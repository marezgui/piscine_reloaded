/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 01:02:16 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/11 10:43:36 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char*)malloc(sizeof(char) * ft_strlen(src));
	if (!dup)
		return (NULL);
	while (i < ft_strlen(src))
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*
**int	main(void)
**{
**	char *s;
**	char *test;
**
**	test = "test";
**	s = ft_strdup(test);
**	printf(" dup = %s", s);
**	return (0);
**}
*/
