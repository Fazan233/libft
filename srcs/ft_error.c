/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 13:48:25 by vuslysty          #+#    #+#             */
/*   Updated: 2019/03/18 13:48:42 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *message)
{
	if (message)
		ft_printf("%s\n", message);
	exit(1);
}
