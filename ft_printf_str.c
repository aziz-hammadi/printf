/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 23:38:13 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 00:53:35 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_str(va_list *my_list, t_options *op)
{
	char	*src;
	int		i;
	int		src_len;

	src = va_arg(*my_list, char *);
	i = 0;
	src_len = ft_strlen(src);
	if ((op->precision != -1) && (op->precision < src_len))
		src_len = op->precision;
	if ((op->width != -1) && (op->width > src_len) && !op->less)
		while (i++ < (op->width - src_len))
			ft_putchar(op->zero ? '0' : ' ');
	ft_putnstr(src, src_len);
	if ((op->width != -1) && (op->width > src_len) && op->less)
		while (i++ < op->width - src_len)
			ft_putchar(' ');
	op->len += (op->width > src_len ? op->width : src_len);
}
