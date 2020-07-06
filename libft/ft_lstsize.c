/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:21:13 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 14:42:46 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*nt;
	int		i;

	if (!lst)
		return (0);
	i = 1;
	nt = lst;
	while (nt->next)
	{
		i++;
		nt = nt->next;
	}
	return (i);
}
