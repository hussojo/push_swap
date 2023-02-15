/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:27:52 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/21 14:23:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_hex(unsigned int nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		len = 1;
	while (nb)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

void	ft_print_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16, format);
		ft_print_hex(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar_printf(n + 48);
		else
		{
			if (format == 'x')
				ft_putchar_printf(n + 87);
			if (format == 'X')
				ft_putchar_printf(n + 55);
		}
	}
}

int	ft_puthex_printf(unsigned int n, const char format)
{
	int	len;

	if (n == '0')
	{
		len = 1;
		ft_putchar_printf('0');
	}
	else
		ft_print_hex(n, format);
	len = ft_len_hex(n);
	return (len);
}
