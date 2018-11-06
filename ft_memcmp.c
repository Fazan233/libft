/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:51:22 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/30 15:23:47 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	while (*ptr_s1 == *ptr_s2 && n--)
	{
		ptr_s1++;
		ptr_s2++;
	}
	if (n == 0)
		return (0);
	else
		return ((int)(*ptr_s1 - *ptr_s2));
}

int                    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0 || s1 == NULL || s2 == NULL)
        return (0);
    while (*(unsigned char*)s1 == *(unsigned char*)s2 && n--)
    {
        s1++;
        s2++;
    }
    return ((*(unsigned char*)s1 - *(unsigned char*)s2));
}
*/
int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (s1 == NULL || s2 == NULL)
        return (0);
    while (n--)
    {
        if ((*(unsigned char *)s1 != *(unsigned char *)s2))
            return (*(unsigned char *)s1 - *(unsigned char *)s2);
        s1++;
        s2++;
    }
    return (0);
}
