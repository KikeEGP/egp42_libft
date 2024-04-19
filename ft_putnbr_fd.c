/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:59:53 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/03/20 19:08:51 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{

}

int	main(void)
{
	int	nb;
	int	fildes;

	nb = 42;
	fildes = 1;
	ft_putnbr_fd(nb, fildes);
	return (0);
}
