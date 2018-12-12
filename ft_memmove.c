/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:32:45 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:32:46 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cp_dest;
	unsigned char	*cp_src;

	cp_dest = (unsigned char*)dst;
	cp_src = (unsigned char*)src;
	if (cp_dest <= cp_src && cp_src <= (cp_dest + len - 1))
		while (len--)
			*cp_dest++ = *cp_src++;
	else
	{
		cp_dest += len - 1;
		cp_src += len - 1;
		while (len--)
			*cp_dest-- = *cp_src--;
	}
	return (dst);
}
