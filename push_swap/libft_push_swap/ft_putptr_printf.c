/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:07:04 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/21 14:24:09 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_ptr(unsigned long nb)
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

void	ft_print_ptr(unsigned long n)
{
	if (n >= 16)
	{
		ft_print_ptr(n / 16);
		ft_print_ptr(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar_printf(n + 48);
		else
			ft_putchar_printf(n + 87);
	}
}

int	ft_putptr_printf(void *ptr)
{
	int		len;

	len = 0;
	write (1, "0x", 2);
	if (ptr == 0)
		write(1, "0", 1);
	else
		ft_print_ptr((unsigned long)ptr);
	len = ft_len_ptr((unsigned long)ptr);
	return (len + 2);
}
