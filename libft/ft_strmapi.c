/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:39:04 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 13:51:42 by junhypar         ###   ########.fr       */
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
	out = ft_strdup((char *)s);
	while (out[i])
	{
		out[i] = f(i, out[i]);
		i++;
	}
	return (out);
}
