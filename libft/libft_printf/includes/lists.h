/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lists.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qcharpen <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 18:23:59 by qcharpen     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/18 10:35:02 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H
# include "ft_printf.h"

typedef struct		s_printf
{
	char			*str;
	int				size;
	struct s_printf	*next;
}					t_printf;

void				ft_lstaddend(t_printf **alst, t_printf *nxt);
void				ft_lstdel(t_printf **alst);
t_printf			*ft_lstnew(char *str, size_t len);
size_t				ft_lstlen(t_printf *list);
int					ft_lstprint(void **fd, t_printf *lst);
int					ft_lstsprint(void **fd, t_printf *lst);
int					ft_lstfprint(void **fd, t_printf *lst);

#endif
