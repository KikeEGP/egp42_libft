/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:26:03 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/10 19:15:35 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*I can´t use original toupper with unsigned chars, or at least, with ñ.
 * Could my ft_toupper do it?*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*
int	main(void)
{
	char	one;
	char one_m;	
	char	two;
	char two_m;



	one = '{';
	two = 'e';
	printf("Look at %c and %c\n", one, two);
	one_m = ft_toupper(one);
	two_m = ft_toupper(two);
	printf("Look now at %c and %c\n", one_m, two_m);
	printf("I don't try with extended ascii and unsgined chars\n");
	printf("because code would not compile");
	return (0);
}*/
