/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:23:03 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/27 01:36:40 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*sub;
	size_t	i;

	if (len == 0)
		return (0);	
	sub = (char *)malloc(len * sizeof(char));
	i = 0;
	while (i < (size_t)start)
		s++;
	while (s[i] != '\0' && i < i + len)
	{
		sub = &s[i++];
		sub++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*text;
	char	*portion;

	text = "Hello World";
	printf("Original text: %s\n", text);
	portion = ft_substr(text, 6, 2);
	printf("Portion is: %s\n", portion);
	free(sub);
	return (0);
}*/
