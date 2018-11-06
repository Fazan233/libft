/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:47:58 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/25 12:55:39 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
    unsigned char *p_s1;
    unsigned char *p_s2;
	int i;

    p_s1 = (unsigned char*)s1;
    p_s2 = (unsigned char*)s2;
	i = 0;
	while (p_s1[i] == p_s2[i] && p_s1[i] != '\0' && p_s2[i] != '\0')
		i++;
	return ((int)(p_s1[i] - p_s2[i]));
}
