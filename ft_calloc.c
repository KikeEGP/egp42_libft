/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:55:28 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/23 22:54:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count);
	return (ptr);
}
/*
int	main(void)
{
	int	*num;

	num = (int *)ft_calloc(10, sizeof(int));
	num = 42;
	printf("num: %d\n", num);
	free(num);
	printf("num memory has been dellocated");
	return (0);
}*/
