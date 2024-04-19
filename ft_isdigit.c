/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:27:09 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/21 15:37:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	num;

	num = 'a';
	printf("Si num es %c, ft_isdigit es %i\n", num, ft_isdigit(num));
	printf("Si num es %c, isdigit es %i\n", num, isdigit(num));
	num ='9';
	printf("Si num es %c, ft_isdigit es %i\n", num, ft_isdigit(num));
	printf("Si num es %c, isdigit es %i\n", num, isdigit(num));
	return (0);
}*/
