/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:34:34 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/09 20:32:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*ft_memcpy takes n bytes from src, and copy it to
dest. Void * are pointers for any typevar. Function is protected for
cases in which both src && dst are NULL*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src_ptr;
	char		*dest_ptr;
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
/*I cannot execute main wit a var declaration following the Norme.
 * Somebody once told me to use strup*/
/*int	main(void)
{
	size_t	num;

	char	o[] = "Hello";
	char	d[] = "Hola";
	num = 2;
	printf("el valor de o es %s y el de d es %s\n", o, d);
	ft_memcpy(d, o, num);
	printf("El valor de d es %s\n", d);
	return (0);
}*/
