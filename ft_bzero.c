/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:16:26 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:16:48 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (s)
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
	ft_memset(text + 10, 'B', 10);
	printf("String aparece como %s\n", text);
	ft_bzero(text, sizeof(text));
	printf("String aparece como %s\n", text);

	return (0);
}*/
