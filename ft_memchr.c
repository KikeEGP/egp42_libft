/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:23:15 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:53:33 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * Here, loop with parameter (i < n) and i = 0 
 * protects function in case of s = NULL*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char*	src;
	char*	ptr;
	char	l;

	src = "Hello World";
	l = 'l';
	ptr = ft_memchr(src, l, 5);
	printf("ptr is %s\n", ptr);
	return (0);
}*/
