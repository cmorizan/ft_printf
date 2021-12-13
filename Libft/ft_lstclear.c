/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:41:45 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 16:50:19 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*here;

	if (!lst || !del)
		return ;
	here = *lst;
	while (here)
	{
		here = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = here;
	}
	*lst = NULL;
}
