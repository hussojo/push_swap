/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:43:45 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/15 16:18:34 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // HOXHOX

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;
	int i = -1;

	counter = 0;
	while (counter < n)
	{
		*(char *)s = '\0';
		s++;
		counter++;
	}
	printf("n = %zu\n", n);
	while (++i < (int)n)
	{
		printf("after bzero st_a[%d] = %d\n", i, *(char*)s);
		s++;
	}
}
