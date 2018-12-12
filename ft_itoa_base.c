/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:30:08 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:43:42 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa_base(int nb, int to)
{
	char			*str;
	int				count;
	int				neg;

	neg = nb < 0 ? 1 : 0;
	nb = nb < 0 ? -nb : nb;
	if ((count = 0) == nb)
		return (ft_strdup("0"));
	while (nb / ft_power(to, count))
		count++;
	if (!(str = (char*)malloc(sizeof(char) * count + neg + 1)))
		return (0);
	str[count + neg] = '\0';
	count--;
	while (nb != 0)
	{
		str[count + neg] = (nb % to) > 9 ? nb % to + (65 - 10) : nb % to + '0';
		nb /= to;
		count--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
