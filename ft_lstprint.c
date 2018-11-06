/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:46:47 by vuslysty          #+#    #+#             */
/*   Updated: 2018/11/06 21:51:22 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *list)
{
	int	i;

	i = 0;
	if (!list)
		return ;
	while (list)
	{
		ft_putnbr(++i);
		ft_putstr(" -> ");
		ft_lstprintone(list);
		ft_putchar('\n');
		list = list->next;
	}
}
