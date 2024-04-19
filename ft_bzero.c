/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:35:59 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/26 21:23:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char	text[20];

	ft_bzero(text, 0);
	printf("String aparece como %s\n", text);
	ft_memset(text, 'A', 10);
	printf("String aparece como %s\n", text);
	ft_memset(text, 'B', 10);
	printf("String aparece como %s\n", text);
	return (0);
}*//*So, I can use ft_bzero in an empty array, but not in one with values...
	 WHY????*/
