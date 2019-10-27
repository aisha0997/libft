/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:51:28 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/26 19:33:25 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void					ft_isnegat(int *c, int *neg)
{
	if (*c < 0)
	{
		*c *= -1;
		*neg = 1;
	}
}

static void					ft_intlen(int c, int *len)
{
	while (c /= 10)
		*len += 1;
}

char						*ft_itoa(int c)
{
	int				n;
	int				len;
	char			*str;

	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 2;
	n = 0;
	ft_isnegat(&c, &n);
	ft_intlen(c, &len);
	len += n;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (0);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = c % 10 + '0';
		c = c / 10;
	}
	if (n)
		str[0] = '-';
	return (str);
}
