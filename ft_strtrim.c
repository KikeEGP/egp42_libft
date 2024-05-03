/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:38:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/01 23:26:19 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	srch_f(char const *ptr, char const *set, size_t n)
{
	while (*set && ptr[n] != '\0')
	{
		if (*set == ptr[n])
			n++;
		else
			set++;
	}
	return (n);
}

static size_t	srch_r(char const *ptr, char const *set, size_t n)
{
	while (*set && n >= 0)
	{
		if (*set == ptr[n])
			n--;
		else
			set++;
	}
	return (n);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	i = srch_f(s1, set, i);
	j = srch_r(s1, set, j);
	result = ft_calloc((j - i) + 2, sizeof(char));
	result = ft_memcpy(result, &s1[i], (j - i) + 1);
	return (result);
}
