/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:22 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/30 22:31:58 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *head, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*last;

	newlist = NULL;
	last = NULL;
	while (head)
	{
		if (newlist == NULL)
		{
			newlist = ft_lstnew(((*f)(head->content)));
			if (newlist == NULL)
				ft_lstdelone(newlist, del);
			last = ft_lstlast(newlist);
		}
		else
		{
			last->next = ft_lstnew(newlist);
			last = last->next;
			last->content = ((*f)(head->content));
			last->next = 0;
		}
		head = head->next;
	}
	return (newlist);
}
// int main() {
// 	t_list *be = ft_lstnew("1");
// 	ft_lstlast(be);
// }
