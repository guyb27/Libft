/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tabstrrev.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:40:57 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 17:46:57 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabstrrev(char **str)
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
	return (str);
}
