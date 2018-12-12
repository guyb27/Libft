/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:32:11 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:32:13 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	return (0);
}
