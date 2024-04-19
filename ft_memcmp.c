/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:07:29 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/19 15:05:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;	
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (*str1 || *str2))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	myresult;
	int	expected;

	char*	str1 = "Jello";
	char*	str2 = "Hellp";
	myresult = ft_memcmp(str1, str2, 5);
	expected = memcmp(str1, str2, 5);
	printf("Myresult: Strs differ %d. Expected: %d\n", myresult, expected);
	return (0);
}*/
