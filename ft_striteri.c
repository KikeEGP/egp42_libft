/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:41:28 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/05 01:23:53 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
			f(i++, s);
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