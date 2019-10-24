/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:57:24 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/20 21:29:55 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	size_t				i;
	size_t				n;
	char				*str;

	str = (char *)s;
	i = 0;
	n = ft_strlen(str);
	while (i <= n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
