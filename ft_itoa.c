/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:21:17 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/03 20:51:37 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_num(int num)
{
	size_t	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*ft_trans(char *string, int num, size_t len)
{
	if (num < 0)
	{
		while (len-- != 1)
		{
			string[len] = -1 * (num % 10) + '0';
			num /= 10;
		}
		string[0] = '-';
	}
	else
	{
		while (len-- != 0)
		{
			string[len] = (num % 10) + '0';
			num /= 10;
		}
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = len_num(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	else
		str = ft_trans(str, n, len);
	return (str);
}
/*
int	main(void)
{
	int	num;
	char	*text;

	num = -85673;
	text = ft_itoa(num);
	ft_putstr_fd(text, 1);
	free(text);	
	return (0);
}*/
