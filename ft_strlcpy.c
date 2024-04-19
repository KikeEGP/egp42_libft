/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 23:30:02 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/09 20:19:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = dstsize - 1;
	if (!(dstsize > sizeof(dst) || dstsize == 0))
	{
		while (src[i] != '\0' && i != w)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[] = "Patatas";
	char	origen[] = "Hola";

	printf("Mira el dest: %s\n", dest);
	int cpy = ft_strlcpy(dest, origen, 5);
	printf("Mira lo que pasa con dest: %s\n", dest);
	printf("Copió %d, mide %lu y pesa %lu\n", cpy, strlen(dest), sizeof(dest));
	return (0);
}*/
