/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:16:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:17:26 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
int    *num;
    int i;
    int j;
 
    i = 10;
    num = ft_calloc(i, sizeof(int));
    num[0] = 42;
    num [8]  = 23;
    j = 0;
    while (j < i)
    {
        printf("num: %d\n", num[j]);
        printf("sizeof: %lu\n\n", sizeof(*num));
        j++;
    }
    num[0] *= 2;
    free(num);
    printf("num memory has been dellocated");
    return (0);
}*/
