/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:22:29 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/21 17:03:42 by enrgil-p         ###   ########.fr       */
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
	char	origen[] = "Mundo";

	printf("Mira el dest: %s\n", dest);
	printf("Mira el origen: %s\n", origen);
	int cpy = strlcat(dest, origen, 17);
	printf("Mira lo que pasa con dest: %s\n", dest);
	printf("Contó %d, copied %lu y pesa %lu\n", cpy, strlen(dest), sizeof(dest));
	return (0);
}*/
