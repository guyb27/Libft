/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 23:26:52 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 23:26:55 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	long	integer_return;
	int		neg;

	if (str[0] == '\0')
		return (0);
	i = 0;
	integer_return = 0;
	while (str[i] == 32 || (str[i] >= 8 && str[i] <= 13))
		i++;
	neg = str[i] == '-' ? -1 : 1;
	str[i] == '-' || str[i] == '+' ? i++ : i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		integer_return = integer_return * 10 + str[i] - '0';
		i++;
	}
	return (integer_return * neg);
}
