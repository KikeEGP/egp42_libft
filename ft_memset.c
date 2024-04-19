/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:16:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/02 17:11:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*man calls void *b, but I saw in other examples calling it "dest"*/
/*void *b expects us to assign a var type to it. That's casting. look at w*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			n;
	unsigned char	*w;

	n = 0;
	w = (unsigned char *)b;
	while (w[n] != '\0')
		n++;
	if (n < len)
	{
		while (n < len)
		{
			w[n] = (unsigned char) c;
			n++;
		}
	}
	return (b);
}
/*
int	main(void)
{
	char	text[3]; //if len > size of b, memset doesn't compile. 
//How can I do that too?

	memset(text, 'H', 5);
	printf("memset hace que el string sea %s\n",text);	
	ft_memset(text, 'H', 5);
	printf("ft_memset hace que el string sea %s\n",text);	
	return (0);
}*/
