/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:01:20 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 14:50:49 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char a;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * (-1);
		}
		a = (n % 10) + '0';
		if (n < 10)
			write(fd, &a, 1);
		else
		{
			ft_putnbr_fd((n / 10), fd);
			write(fd, &a, 1);
		}
	}
}
