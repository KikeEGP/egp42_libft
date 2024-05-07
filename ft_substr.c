/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:23:03 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/07 21:06:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (len != 0 && *s)
	{
		i = 0;
		while (i < start)
			i++;
		sub = ft_calloc(len + 1, sizeof(char));
		if (!sub)
			return (0);
		sub = ft_memcpy(sub, &s[i], len);
		return (sub);
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
	portion = ft_substr(text, 6, 3);
	printf("Portion is: %s\n", portion);
	free(portion);
	return (0);
}*/
