/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:30:14 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/16 15:55:49 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr2;

	if (*lst == NULL)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		ptr2 = ptr -> next;
		ft_lstdelone(ptr, del);
		ptr = ptr2;
	}
	*lst = NULL;
}
