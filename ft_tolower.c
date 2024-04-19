/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:11:17 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/10 19:15:19 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
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
	two = 'E';
	printf("Look at %c and %c\n", one, two);
	one_m = ft_tolower(one);
	two_m = ft_tolower(two);
	printf("Look now at %c and %c\n", one_m, two_m);
	printf("I don't try with extended ascii and unsgined chars\n");
	printf("because code would not compile");
	return (0);
}*/
