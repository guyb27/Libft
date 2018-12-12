/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:40:46 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:40:48 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*str_return;
	int			i;
	int			j;
	int			k;

	if (!s)
		return (0);
	k = 0;
	j = ft_strlen(s);
	i = -1;
	while ((s[++i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		;
	while ((s[--j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[i])
		;
	j++;
	if (i == 0 && j == (int)ft_strlen(s))
		return (ft_strdup((char*)s));
	if (!(str_return = (char*)malloc(sizeof(char) * ((int)j - i + 1))))
		return (0);
	while (i < j)
		str_return[k++] = s[i++];
	str_return[k] = '\0';
	return (str_return);
}
