/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:57:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/09 20:26:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
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

	char final[] = "Patata";
	char origen[] = "Hello there";
	n = 5;
	printf("Mira, final es %s y origen es %s\n", final, origen);
	printf("El final es %s\n", final);
	printf("Mi int es %hhi\n", final[3]);
	ft_memmove(final+1, origen, n);
	printf("Y ahora final es %s\n", final);
	return (0);
}*/
