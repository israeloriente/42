/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/30 22:48:30 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
// t_list	*node;
	// while (lst)
	// {
	// 	node = lst;
	// 	lst = lst->next;
	// 	del(node->content);
	// 	free(node);
	// }
// int main() {
// 	t_list *be = ft_lstnew("1");
// 	ft_lstlast(be);
// }
