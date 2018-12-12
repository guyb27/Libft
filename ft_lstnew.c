/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:31:25 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 18:44:47 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*var;

	if (!(var = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		var->content = NULL;
		var->content_size = 0;
	}
	else
	{
		if (!(var->content = malloc(content_size)))
			return (NULL);
		var->content = ft_memcpy(var->content, content, content_size);
		var->content_size = content_size;
	}
	var->next = NULL;
	return (var);
}
