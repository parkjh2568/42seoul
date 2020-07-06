/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:36:05 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 14:44:57 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ot;
	t_list *ot2;

	ot = *lst;
	while (ot->next)
	{
		ot2 = ot;
		ot = ot->next;
		del(ot2->content);
		free(ot2);
		ot2 = 0;
	}
	del(ot->content);
	free(ot);
	ot = 0;
}
