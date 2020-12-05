/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:22:47 by nlafarge          #+#    #+#             */
/*   Updated: 2020/10/28 00:03:35 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnstr(char const *s, int n, int *len)
{
	int	i;

	if (s)
	{
		i = 0;
		while (i < n && s[i] != '\0')
		{
			ft_putchar(s[i], len);
			i++;
		}
	}
}
/*
void	ft_putstr(char const *s)
{
	ft_putnstr(s, ft_strlen(s));
}
*/