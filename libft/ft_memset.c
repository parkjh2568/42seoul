/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 14:41:03 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 16:52:55 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	char			*str;

	str = (char *)ptr;
	while (num--)
	{
		str[num] = value;
	}
	return (ptr);
}
