/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:39:50 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:39:51 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	if (*s == (char)c)
		return ((char *)s);
	while (i > 0)
	{
		i--;
		s--;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (0);
}
