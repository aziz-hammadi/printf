/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pourcent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 17:53:04 by ahammad           #+#    #+#             */
/*   Updated: 2020/10/28 00:00:42 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_pourcent(va_list *my_list, t_options *op)
{
	(void)my_list;
	(void)op;
	ft_putchar('%', &op->len);
}
