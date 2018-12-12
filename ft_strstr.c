/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:40:23 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:40:25 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!needle[0])
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < ft_strlen(needle))
			j++;
		if (j == ft_strlen(needle))
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
