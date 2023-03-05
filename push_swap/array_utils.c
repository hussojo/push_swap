/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:28:06 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/05 14:04:22 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*cpy_array(int *source, int *dest, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

int	av_count(char **array)
{
	int	count;

	count = 0;
	while (array[count])
		count++;
	return (count);
}

void	ft_set_zero(int *st_a, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		st_a[i] = 0;
		i++;
	}
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free (array[i]);
		i++;
	}
	free (array);
}
