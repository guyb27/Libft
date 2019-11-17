/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dzonda <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 20:13:32 by dzonda       #+#   ##    ##    #+#       */
/*   Updated: 2018/07/31 23:41:32 by dzonda      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/libft.h"

size_t		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}
