/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 23:38:13 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/07 00:21:16 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_str(va_list *my_list)
{
	char *src;

	src = va_arg(*my_list, char *);
	write(1, src, ft_strlen(src));
}
