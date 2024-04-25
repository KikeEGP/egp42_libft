/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:15:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 23:53:36 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*int	ft_atoi(const char *str)
{
	int		result;
	size_t	i;
	
	if (!((*str >= 48 && *str <= 57) || (*str != 43 || *str != 45)))
		return (0);
	while (!(str[i] >= 48 && *str[i] <= 57))
		return (0);
	result = str - 48;
	return (result);
}*/

int main(void)
{
    char  *text;
    int   num;

    text = "-9223372036854775808";
    num = atoi(text);
	printf("Num is %d", num);
    return (0);
}
