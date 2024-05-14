/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:41:28 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/13 15:23:52 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	my_ft(unsigned int i, char *str)
{
	int	num;

	if (ft_isalpha(str[i]) && (!(str[i] >= 65 && str[i] <= 90)))
		str[i] -= 32;
	else if (ft_isdigit(str[i]))
	{
		num = str[i] - '0';
		num = num / 2;
		str[i] = num + '0';
	}
}

int	main(void)
{
	char	text[100] = "Hello, World. I'm Enrique, studtent at 42 Madrid!";
	printf("%s\n\n", text);
	ft_striteri(text, my_ft);
	printf("%s\n", text);
	return (0);
}*/
