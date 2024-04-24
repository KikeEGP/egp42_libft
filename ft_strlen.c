/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:26:39 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/24 13:54:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strlen returns a size_t, not an int. size_t is an unsigned long*/

size_t	ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}



/*{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	const char*	text;

	text = "Hello World";
	printf("My function counts a length of %lu in %s\n", ft_strlen(text), text);
	printf("Original counts a length of %lu in %s\n", strlen(text), text);
	return (0);
}*/
