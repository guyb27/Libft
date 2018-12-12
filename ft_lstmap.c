/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 23:25:53 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:31:16 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*news;
	t_list	*tmp;
	t_list	*begin;

	if (lst != NULL && f != NULL)
	{
		tmp = f(lst);
		if (!(news = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		begin = news;
		lst = lst->next;
		while (lst != NULL)
		{
			tmp = f(lst);
			if (!(news->next = ft_lstnew(tmp->content, tmp->content_size)))
				return (NULL);
			news = news->next;
			lst = lst->next;
		}
		return (begin);
	}
	return (NULL);
}
