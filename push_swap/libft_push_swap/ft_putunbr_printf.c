/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:20:30 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/21 14:24:25 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putu_printf(unsigned int n)
{
	int		len;
	char	*output;

	output = ft_itoa_unsigned(n);
	ft_putstr_printf(output);
	len = ft_strlen(output);
	free (output);
	return (len);
}
