/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/19 09:54:25 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_one_arg(char **av, char **array)
{
	array = ft_split(av[1], 32);
	if(!array)
	{
		free(array);
		return (NULL);
	}
	return (array);
}

char	**ft_many_args(char **av, int ac, char **array)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	array = (char **)ft_calloc(sizeof(char *), ac);
	if (!array)
	{
		free(array);
		return (NULL);
	}
	while (i < ac)
	{
		array[j] = ft_strdup(av[i]);
		i++;
		j++;
	}
	return (array);
}
