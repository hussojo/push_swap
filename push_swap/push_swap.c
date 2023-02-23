/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/23 09:57:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_one_arg(char **av, char **array)
{
	array = ft_split(av[1], 32);
	if(!array)
		error_msg("Error\n", array, 1);
	// int i = 0;
	// while (array[i])
	// {
	// 	printf("array[%d]= %s", i, array[i]);
	// 	i++;
	// }
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
		free_array(array);
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

int	main(int ac, char **av)
{
	char	**array;

	array = 0;
	if (ac == 1)
		return (0);
	else if (ac == 2)
	{
		array = ft_one_arg(av, array);
		if(!array || array[0] == NULL)
			error_msg("Error\n", array, 1);
	}
	else if (ac > 2)
	{
		array = ft_many_args(av, ac, array);
		if(!array || array[0] == NULL)
			error_msg("Error\n", array, 1);
	}
	work_stack(array);
	return (0);
}
