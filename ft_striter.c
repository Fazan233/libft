/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:24:22 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/30 20:42:09 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char*))
{
	size_t	i;

	i = -1;
	if (&s[i + 1] == NULL)
		return ;
	while (s[++i] != '\0')
		f(&s[i]);
}