/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:54:16 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/19 13:51:11 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_printf(char *s)
{
	int	i;

	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (*s)
	{
		ft_putchar_printf(*s);
		s++;
		i++;
	}
	return (i);
}
