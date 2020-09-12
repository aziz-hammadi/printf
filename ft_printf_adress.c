/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_adress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:53:54 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 21:43:04 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_num(t_options *op, int flen, int hexa, int num_len)
{
	int	i;

	i = 0;
	if ((op->width != -1) && (op->width > flen + 2 && !op->less))
		while (i++ < (op->width - flen - 2))
			ft_putchar(op->zero ? '0' : ' ');
	i = 0;
	ft_putchar('0');
	ft_putchar('x');
	if (flen > num_len)
		while (i++ < op->precision - num_len)
			ft_putchar('0');
	op->len += (op->width > flen + 2 ? op->width : flen) + 2;
}

static void	perform_print(t_options *op, unsigned long hexa)
{
	if (op->precision != 0 || hexa != 0)
		ft_putnbr_base(hexa, "0123456789abcdef");
}

void		ft_printf_adress(va_list *my_list, t_options *op)
{
	unsigned long	hexa;
	int				num_len;
	int				i;
	int				flen;

	hexa = (unsigned long)va_arg(*my_list, void *);
	num_len = ft_nbrlen_lu(hexa, 16);
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
	if ((op->width != -1) && (op->width > flen + 2 && op->less))
		while (i++ < (op->width - flen - 2))
			ft_putchar(' ');
}
