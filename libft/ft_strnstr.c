/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:45:41 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/22 19:20:50 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t				i;
	char				*res;

	if (*to_find == '\0')
		return ((char*)str);
	while (*str != '\0' && n > 0)
	{
		i = 0;
		res = (char *)str;
		while ((to_find[i] == str[i]) && (to_find[i] != '\0') && i > n)
			i++;
		if (to_find[i] == '\0')
			return (&res[i]);
		str++;
		n--;
	}
	return (NULL);
}
