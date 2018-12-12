/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:30:36 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:45:44 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*mem;
	t_list	*mem2;

	if (*alst == NULL || alst == NULL)
		return ;
	mem = *alst;
	while (mem)
	{
		mem2 = mem->next;
		del(mem->content, mem->content_size);
		free(mem);
		mem = mem2;
	}
	*alst = NULL;
}
