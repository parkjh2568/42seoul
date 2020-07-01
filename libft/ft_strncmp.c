/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 09:47:25 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 10:17:09 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t a;

	a = 0;
	if (n != 0)
	{
		while (s1[a] && a < n)
		{
			if (s1[a] > s2[a])
				return (s1[a] - s2[a]);
			else if (s2[a] > s1[a])
				return (s1[a] - s2[a]);
			a++;
		}
		if (s1[a] == 0 && s2[a] != 0 && a < n)
			return (s1[a] - s2[a]);
	}
	return (0);
}
