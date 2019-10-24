/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:52:58 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/23 21:11:16 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				 ft_putstr_fd(char *s, int fd)
{
	int				i;

	i = 0;
	if (s)
		while (s[i] != '\0')
			ft_putchar_fd(s[i++], fd);
}
