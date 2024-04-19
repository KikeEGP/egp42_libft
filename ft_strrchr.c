/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:29:00 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/16 21:47:12 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == (char)c)
			aux = s;
		s++;
	}
	return ((char *)aux);
}
/*
int	main(void)
{
	char*	string;
	char	l;
	char*	result;

	string = "Hello world";
	l = 'o';
	result = ft_strrchr(string, l);
	printf("String is: %s\n", string);
	printf("Result is: %s\n", result);
	return (0);
}*/
