/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:58:27 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/29 17:34:12 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	copy[len];
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char*)src;
	i = -1;
	while (++i < len)
		copy[i] = ptr[i];
	ptr = (unsigned char*)dst;
	i = -1;
	while (++i < len)
		ptr[i] = copy[i];
	return (dst);
}
*/
void		*ft_memmove(void *dst, const void *src, size_t len)
{
    void	*ret;
    
    if (dst == NULL || src == NULL)
        return (dst);
    ret = dst;
    if (dst < src)
        while ((size_t)(dst - ret) < len)
            *(t_byte*)dst++ = *(t_byte*)src++;
    else
        while (len-- > 0)
            ((t_byte*)dst)[len] = ((t_byte*)src)[len];
    return (ret);
}
