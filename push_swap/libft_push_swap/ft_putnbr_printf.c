/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:07:58 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/21 14:23:27 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_printf(int n)
{
	int		len;
	char	*output;

	output = ft_itoa(n);
	ft_putstr_printf(output);
	len = ft_strlen(output);
	free (output);
	return (len);
}
