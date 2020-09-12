/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:23:42 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 11:53:27 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_char(va_list *my_list, t_options *op)
{
	char	c;

	c = va_arg(*my_list, int);
	if (op->less == 1)
		write(1, &c, 1);
	while (op->width > 1)
	{
		ft_putchar(' ');
		op->width--;
	}
	if (op->less == 0)
		write(1, &c, 1);
	op->len += (op->width > 0 ? op->width : 1);
}
