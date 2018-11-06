/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:18:03 by vuslysty          #+#    #+#             */
/*   Updated: 2018/11/06 14:49:08 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	t_byte	*ptr;

	ptr = (t_byte*)b;
	while (len > 0)
		ptr[len-- - 1] = (t_byte)c;
	return (b);
}
