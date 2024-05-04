/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:58:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/05 00:55:25 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
/*
int	main(void)
{
	size_t	n;

	char end[] = "Patata";
	char origin[] = "Hello there";
	n = 5;
	printf("Look, end is %s and origin is %s\n", end, origin);
	printf("El end is %s\n", end);
	printf("My int is %hhi\n", end[3]);
	ft_memmove(end+1, origin, n);
	printf("And now end is %s\n", end);
	return (0);
}*/
