/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:00:17 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/12 15:45:58 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
**int	ft_test(char *s)
**{
**	if (*s > 2)
**		return (1);
**	return (0);
**}
*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int length;

	i = 0;
	length = 0;
	while ((tab[i]) != '\0')
	{
		if ((*f)(tab[i]) == 1)
			length++;
		i++;
	}
	return (length);
}

/*
**int	main(int argc, char *argv[])
**{
**	int len;
**
**	len = 0;
**	len = ft_count_if(argv, ft_test);
**	printf("%d",len );
**	return (0);
**}
*/
