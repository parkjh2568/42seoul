/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:36:05 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 17:34:13 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ot;

	while (*lst)
	{
		del((*lst)->content);
		ot = *lst;
		*lst = (*lst)->next;
		free(ot);
	}
	*lst = NULL;
}
