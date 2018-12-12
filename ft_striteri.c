/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striteri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:37:17 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 00:37:19 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int		i;

	if (s && f)
	{
		i = -1;
		while (s[++i])
			f(i, &s[i]);
	}
}
