/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:26:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/05 21:11:08 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_occurr(char const *str, char c)
{
	size_t	n;
	size_t i;

	n = 2;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			n++;
	}
	return (n);
}

static char	**no_occurr(char const *str)
{
	char	**result;

	result[0] = ft_strdup(str);
	result[1] = ft_calloc(1, sizeof(char));
	return (result);
}

static char	**c_occurr(char const *str, char c, size_t n)
{
	char	**result;
	size_t	i;
	size_t j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			result[j] = 
			i = 0;
			j++;
		}


char **ft_split(char const *s, char c)
{
	char	**array;
	size_t	n_ptr;

	if (*s)
	{
		n_ptr = 2;
		n_ptr = find_occurr(s, c);
		array = malloc(n_ptr * sizeof(char *));
		if (*array)
		{
			if (n_ptr == 2)
				array = no_occurr(s);
			else if (n_ptr > 2)
				array =c_occurr(s, c, n_ptr);
			return (array);
		}
	}
	return (0);
}
