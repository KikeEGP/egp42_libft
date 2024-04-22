/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:35:59 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/22 22:27:10 by enrgil-p         ###   ########.fr       */
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

	ft_bzero(text, sizeof(text));
	printf("String aparece como %s\n", text);
	ft_memset(text, 'A', 10);
	printf("String aparece como %s\n", text);
	ft_memset(text+10, 'B', 10);
	printf("String aparece como %s\n", text);
	ft_bzero(text, sizeof(text));
	printf("String aparece como %s\n", text);

	return (0);
}*/
