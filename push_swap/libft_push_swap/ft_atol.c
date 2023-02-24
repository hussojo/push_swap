/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:14:47 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/24 17:09:37 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// modified to return 0 in case of overflow and numbers starting with 0 ex. 089
#include "libft.h"
#include <stdio.h> // HOXHOXHOX

long	ft_atol(const char *nptr)
{
	long	s;
	long	res;

	s = 1;
	res = 0;
	if (*nptr == '-')
		s *= -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13) || *nptr == 48)
	{
		if (*nptr++ == '\0')
			return (0);
	}
	printf("%ld\n", s);
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		printf("%ld\n", res);
		if ((res > 2147483647 && s == 1) || (res > 2147483648 && s == -1))
			return (0);
		nptr++;
	}
	res = res * s;
	printf("%ld\n", res);
	return (res);
}
