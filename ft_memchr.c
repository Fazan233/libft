/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:34:40 by vuslysty          #+#    #+#             */
/*   Updated: 2018/11/01 14:03:16 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = -1;
	if (s == NULL)
		return (NULL);
	while (++i < n)
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (((unsigned char*)s) + i);
	return (NULL);
}
