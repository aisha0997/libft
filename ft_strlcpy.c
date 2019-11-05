/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:34 by alaafia           #+#    #+#             */
/*   Updated: 2019/11/01 11:27:25 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t max)
{
	size_t				len;

	if (src == NULL)
		return (0);
	len = ft_strlen(src);
	if (max == 0)
		return (len);
	if (len + 1 < max)
	{
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	else
	{
		ft_memcpy(dst, src, max - 1);
		dst[max - 1] = '\0';
	}
	return (len);
}
