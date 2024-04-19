/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:30 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/21 15:35:12 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
		char	car;

	car = '/';
	printf("El char car %c devuelve %i\n", car, ft_isascii(car));
	car = '6';
	printf("El char car %c devuelve %i\n", car, ft_isascii(car));
	car = 'A';
	printf("El char car %c devuelve %i\n", car, ft_isascii(car));
	car = ' ';
	printf("El char car %c devuelve %i\n", car, ft_isascii(car));
	car = '*';
	printf("El char car %c devuelve%i\n\n", car, ft_isascii(car));
	car = 0;
	printf("El char car nul %c devuelve %i\n", car, ft_isascii(car));
	car = 0;
	printf("El char car nul %c debe devolver  %i\n\n", car, isascii(car));	
	car = 127;
	printf("El char car %c devuelve %i\n", car, ft_isascii(car));
	return (0);
}*/
