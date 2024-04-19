/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:08:25 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/21 15:41:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	*text;

	text = "d";
	printf("ft_isalpha sobre %s\n", text);
	printf("nos devuelve un valor de %i\n\n", ft_isalpha(*text));
	printf("isalpha sobre %s\n", text);
	printf("nos devuelve un valor de %i", isalpha(*text));
	return (0);
}*/
