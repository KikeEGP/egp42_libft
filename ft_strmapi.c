/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 23:15:15 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/07 18:38:10 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
char	*alpha_upper(unsigned int i, char str)
{
	while (ft_isalpha(str) && (!(str >= 65 && str <= 90)))
		str -= 32;
	return &str;
}

int	main(void)
{
	char	*new;
	char	str[20] = "Hello World";
	printf("%s\n\n", str);
	new = ft_strmapi(str, alpha_upper);
	printf("%s\n", new);
	free(new);
}*/
