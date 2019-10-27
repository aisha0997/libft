/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:01:53 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/25 20:03:10 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	unsigned char			*st1;
	unsigned char			*st2;

	i = 0;
	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while ((st1[i] != '\0' || st2[i] != '\0') && i < n)
	{
		if (st1[i] != st2[i])
			return ((int)(st1[i] - st2[i]));
		i++;
	}
	return (0);
}
