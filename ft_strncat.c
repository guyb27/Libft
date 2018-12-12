/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:38:24 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:38:25 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		len_dest;

	len_dest = 0;
	i = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[i] && n > 0)
	{
		dest[len_dest] = src[i];
		len_dest++;
		n--;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
