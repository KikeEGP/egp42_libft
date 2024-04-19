/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:48:41 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/19 14:14:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*						Remember test2 has a NULL
int	main(void)
{
	char*	str1;
	char*	str2;
	int		t1;
	int		ot1;
	int		t2;
	int		ot2;
	int		t3;
	int		ot3;
	int		t4;
	int		ot4;

	str1 = "Hello World";
	str2 = "Hello";
	t1 = ft_strncmp(str1, str2, 2);
	ot1 = strncmp(str1, str2, 2);
	printf("1) If n = 2, my ft returns %d and should be %d\n", t1, ot1);
	t2 = ft_strncmp(NULL, str2, 5);
	ot2 = strncmp(str1, str2, 5);
	printf("2) If n = 5, my ft returns %d and should be %d\n", t2, ot2);
	t3 = ft_strncmp(str1, str2, -5);
	ot3 = strncmp(str1, str2, -5);
	printf("3) If n = -5, my ft returns %d and should be %d\n", t3, ot3);
	t4 = ft_strncmp(NULL, str2, 0);
	ot4 = strncmp(str1, str2, 0);
	printf("4) If n = 0, my ft returns %d and should be %d\n", t4, ot4);	
	return (0);
}*/
