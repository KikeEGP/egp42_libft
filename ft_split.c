/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:26:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/07 21:40:36 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_occurr(char const *str, char c, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && j != i && i != ft_strlen(str) - 1)
		{
			j = i + 1;
			n++;
		}
		else if (str[i] == c && j == i)
			j++;
		i++;
	}
	return (n);
}

static char	**memerror(char **array, size_t n)
{
	while (n <= 0)
		free(array[n--]);
	free(array);
	return (0);
}

static char	**no_occurr(char **result, char const *str)
{
	result[0] = ft_strdup(str);
	if (!result[0])
		return (memerror(result, 0));
	return (result);
}

static char	**c_occurr(char **result, char const *str, char c, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	start = i;
	j = 0;
	while (*str && j < n)
	{
		if ((str[i] == c || str[i] == '\0') && i != start)
		{
			result[j] = ft_substr(str, start, i - start);
			if (!result[j])
				return (memerror(result, j));
			start = i + 1;
			j++;
		}
		else if (str[i] == c && i == start)
			start++;
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	n_ptr;

	if (*s)
	{
		n_ptr = 1;
		n_ptr = find_occurr(s, c, n_ptr);
		array = ft_calloc(n_ptr + 1, sizeof(char *));
		if (!array)
			return (0);
		else if (n_ptr == 1)
			array = no_occurr(array, s);
		else if (n_ptr > 1)
			array = c_occurr(array, s, c, n_ptr);
		return (array);
	}
	return (0);
}
