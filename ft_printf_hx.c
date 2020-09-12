/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:34:01 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 21:24:47 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_num(t_options *op, int flen, int hexa, int num_len)
{
	int i;

	i = 0;
	if ((op->width != -1) && (op->width > flen && !op->less))
		while (i++ < (op->width - flen))
			ft_putchar(op->zero ? '0' : ' ');
	i = 0;
	if (flen > num_len)
		while (i++ < op->precision - num_len)
			ft_putchar('0');
	op->len += (op->width > flen ? op->width : flen);
}

static void	perform_print(t_options *op, unsigned int hexa)
{
	if (op->precision != 0 || hexa != 0)
		ft_putnbr_base(hexa, "0123456789ABCDEF");
}

void		ft_printf_hx(va_list *my_list, t_options *op)
{
	unsigned int	hexa;
	int				num_len;
	int				i;
	int				flen;

	hexa = va_arg(*my_list, unsigned int);
	num_len = ft_nbrlen_u(hexa, 16);
	i = 0;
	flen = num_len;
	if (op->precision != -1)
	{
		if (op->precision > num_len)
			flen = op->precision;
		op->zero = 0;
	}
	print_num(op, flen, hexa, num_len);
	perform_print(op, hexa);
	i = 0;
	if ((op->width != -1) && (op->width > flen + (hexa < 0)) && op->less)
		while (i++ < (op->width - flen - (hexa < 0)))
			ft_putchar(' ');
}
