/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:57:40 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 15:29:16 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "stdio.h" HOXHOX

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(sizeof (char) * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(dup, s);
	//  printf("st_a = %s\n", dup);
	return (dup);
}
