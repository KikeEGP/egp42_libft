/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:29:00 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/23 20:35:54 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
			aux = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)aux);
}
/*
int	main(void)
{
	char*	string;
	char	l;
	char*	myresult;
	char*	result;

	string = "\0";
	l = 'a';
	myresult = ft_strrchr(string, l);
	result = strrchr(string, l);
	printf("String is: %s\n", string);
	printf("Result is: %s\n", result);
	printf("My result is: %s\n", myresult);
	return (0);
}*/
