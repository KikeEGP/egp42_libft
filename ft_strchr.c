/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:45:28 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/13 15:19:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*We iterate inside the pointer, we change the pointer direction.
 * Then, we return the pointer, at the last position it has been*/

char	*ft_strchr(const char *s, int c)
{
	while (s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	if (s == '\0')
		return ((char *) s);
	return (0);
}
/*
int	main(void)
{
	char*	string;
	char	l;
	char*	result;

	string = "Buenos días";
	l = 's';
	result = strchr(string, l);
	printf("String is: %s\n", string);
	printf("Result is: %s\n", result);
	return (0);
}*/
