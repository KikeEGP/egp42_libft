/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 23:15:15 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/05 01:26:30 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	unsigned int	i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (*str)
	{
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*new;
	unsigned int	i;

	str = "Hello World";
	printf("%s\n\n", str);
	i = 0;
	new = ft_strmapi(str, str[i](ft_toupper));
	printf("%s\n", new);
	free(new);
}*/
