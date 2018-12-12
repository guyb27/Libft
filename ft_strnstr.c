/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:39:12 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:39:21 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j] && needle[j])
			j++;
		if (j == (size_t)ft_strlen(needle))
			return (((char*)haystack) + i);
		i++;
	}
	return (0);
}
