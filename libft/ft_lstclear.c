/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:36:05 by junhypar          #+#    #+#             */
/*   Updated: 2021/04/01 16:40:46 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*ot;

	while (*lst)
	{
		del((*lst)->content);
		ot = *lst;
		*lst = (*lst)->next;
		free(ot);
	}
	*lst = NULL;
}
