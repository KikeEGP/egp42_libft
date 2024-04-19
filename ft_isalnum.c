/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:12:10 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/21 16:23:30 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main(void)
{
	char	alflet;

	alflet = '/';
	printf("El char alflet %c tiene el valor %i\n", alflet, ft_isalnum(alflet));
	alflet = '6';
	printf("El char alflet %c tiene el valor %i\n", alflet, ft_isalnum(alflet));
	alflet = 'A';
	printf("El char alflet %c tiene el valor %i\n", alflet, ft_isalnum(alflet));
	alflet = ' ';
	printf("El char alflet %c tiene el valor %i\n", alflet, ft_isalnum(alflet));
	alflet = '*';
	printf("El char alflet %c tiene el valor %i\n", alflet, ft_isalnum(alflet));
	
	return (0);
}*/
