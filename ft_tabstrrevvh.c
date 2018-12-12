/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tabstrrevvh.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:41:07 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:41:13 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabstrrevvh(char **str)
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	i = -1;
	while (str[++i])
		;
	i--;
	while (j <= i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	i = -1;
	while (str[++i])
		ft_strrev(str[i]);
	return (str);
}
