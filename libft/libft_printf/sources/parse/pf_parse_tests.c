/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parse_tests.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qcharpen <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 17:49:47 by qcharpen     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/17 16:03:53 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/parse.h"

int		pf_is_conv(const char c)
{
	return (pf_strchr("%sdDioOuUxXcpfF", c) != NULL);
}

int		is_size(const char c)
{
	return (pf_strchr("hljz", c) != NULL);
}

int		is_flag(const char c)
{
	return (pf_strchr("0#-+ L", c) != NULL);
}

int		is_valid(const char c)
{
	return (pf_is_conv(c) || is_size(c) || is_flag(c) || pf_isdigit(c)
			|| c == '.');
}
