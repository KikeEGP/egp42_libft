/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:26:44 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/22 20:58:13 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*srch_loop(const char *h, const char *n, size_t i)
{
	while (*h == *n && i != 0 && (*n != '\0' || *h != '\0'))
	{
		h++;
		n++;
		i--;
	}
	return (n);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*n;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == *needle)
		{
			n = srch_loop(haystack, needle, len);
			if (*n == '\0')
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
/*
int	main(void)
{
	const char* src = "Hello World, how are you?";
    const char* searched = "ld";
    char*   result;
	char*	myresult;

    printf("%s\n\n", src);
    result = strnstr(src, searched, 15);
    myresult = ft_strnstr(src, searched, 15);
    printf("Result is: %s\nMy result is: %s\n", result, myresult);
    return (0);
}*/		
