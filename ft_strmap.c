/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:38:01 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:38:03 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (0);
		str[ft_strlen(s)] = '\0';
		while (((char*)s)[i])
		{
			str[i] = f(((char*)s)[i]);
			i++;
		}
		return (str);
	}
	else
		return (0);
}
