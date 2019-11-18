/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qcharpen <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 16:56:51 by qcharpen     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/29 20:53:52 by qcharpen    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/lists.h"

void	ft_lstdel(t_printf **alst)
{
	t_printf	*next;

	while (*alst)
	{
		next = (*alst)->next;
		free((*alst)->str);
		free(*alst);
		*alst = next;
	}
	*alst = NULL;
}
