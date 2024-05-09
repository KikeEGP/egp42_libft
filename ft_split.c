/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:26:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/08 21:25:42 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c, size_t num_words)
{
	size_t	i;
	size_t	c_skip;

	i = 0;
	c_skip = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && c_skip != i && i != ft_strlen(str) - 1)
		{
			c_skip = i + 1;
			num_words++;
		}
		else if (str[i] == c && c_skip == i)
			c_skip++;
		i++;
	}
	return (num_words);
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
	while (str && j < n)
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

	if (s)
	{
		n_ptr = 1;
		n_ptr = count_words(s, c, n_ptr);
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
/*int	main(void)
{
	char	**result;
	char	*string;
	char	*searched;
	size_t	i;

	string = "Madrid,Barcelona,Valencia,Sevilla,Zaragoza,Málaga,Bilbao,León";
	result = ft_split(string, ',');
	i = 0;
	while (result[i])
		ft_putendl_fd(result[i++], 1);
	free(result);
	return (0);
}*/