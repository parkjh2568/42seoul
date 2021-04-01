/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 09:47:25 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 15:45:35 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			a;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	a = 0;
	if (n != 0)
	{
		while (ss1[a] && a < n)
		{
			if (ss1[a] > ss2[a])
				return (ss1[a] - ss2[a]);
			else if (ss2[a] > ss1[a])
				return (ss1[a] - ss2[a]);
			a++;
		}
		if (ss1[a] == 0 && ss2[a] != 0 && a < n)
			return (ss1[a] - ss2[a]);
	}
	return (0);
}
