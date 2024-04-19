/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:11:08 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/21 20:02:51 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	p;

	p = ' ';
	printf("El char %c devuelve %i con mi función\n", p, ft_isprint(p));
	printf("El char %c devuelve %i con mi función\n\n", p, ft_isprint(p));
	p = '~';
	printf("El char %c devuelve %i con mi función\n", p, ft_isprint(p));
	printf("El char %c devuelve %i con mi función\n\n", p, ft_isprint(p));
 	p = ']';
	printf("El char %c devuelve %i con mi función\n", p, ft_isprint(p));
	printf("El char %c devuelve %i con mi función\n\n", p, ft_isprint(p));
	p = 0;
	printf("El chari nul %c devuelve %i con mi función\n", p, ft_isprint(p));
	printf("El char nul %c devuelve %i con mi función\n\n", p, ft_isprint(p));
	return (0);
}*/
