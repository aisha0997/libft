/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:47:44 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/24 17:13:12 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	size_t				len_s1;
	size_t              len_s2;
	size_t				len;
	char				*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen((char *)s1);
   	len_s2 = ft_strlen((char *)s2);
	len = len_s1 + len_s2;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memmove(str, s1, len_s1);
	ft_memmove(str + len_s1, s2, len + 1);
	return (str);
}
