/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:39:04 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 17:10:45 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*out;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(out = ft_strdup((char *)s)))
		return (NULL);
	while (out[i])
	{
		out[i] = f(i, out[i]);
		i++;
	}
	return (out);
}
