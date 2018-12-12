/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:38:14 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:38:15 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (s)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (0);
		str[ft_strlen(s)] = '\0';
		while (s[i])
		{
			str[i] = f(i, ((char*)s)[i]);
			i++;
		}
		return (str);
	}
	else
		return (0);
}
