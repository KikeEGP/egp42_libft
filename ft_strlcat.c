/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:03:22 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 18:07:48 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	i = 0;
	while (src[i] != '\0' && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
/*
int	main(void)
{
	char	dest[15] = "Hola";
	char	origin[] = "Mundo";

	printf("Dest is: %s\n", dest);
	printf("Origin is: %s\n", origin);
	int cpy = strlcat(dest, origin, 17);
	printf("Look what happened to dest: %s\n", dest);
	printf("Count %d, copied %lu,size %lu\n", cpy, strlen(dest), sizeof(dest));
	return (0);
}*/
