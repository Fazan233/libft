/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:04:17 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/25 13:17:10 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_strncmp(const char *s1, const char *s2, size_t n)
{
unsigned char *p_s1;
unsigned char *p_s2;
size_t i;

p_s1 = (unsigned char*)s1;
p_s2 = (unsigned char*)s2;
i = 0;
while (p_s1[i] == p_s2[i] && p_s1[i] != '\0' && p_s2[i] != '\0' && --n > 0)
    i++;
return ((int)(p_s1[i] - p_s2[i]));
}
