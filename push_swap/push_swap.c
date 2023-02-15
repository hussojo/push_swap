/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/15 14:44:48 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void get_position(char **array)

char	**ft_one_arg(char **av, char **array)
{
	array = ft_split(av[1], 32);
	if(!array)
		return (NULL);
	return (array);
}

char	**ft_many_args(char **av, int ac, char **array)
{
	int	i;
	int	j;
	//int	size;

	i = 1;
	j = 0;
	array = (char **)ft_calloc(sizeof(char *), ac);
	if (!array)
		return (NULL);
	while (i < ac)
	{
		//size = ft_strlen(av[i]);
		array[j] = ft_strdup(av[i]);
		i++;
		j++;
	}
	return (array);
}

int	main(int ac, char **av)
{
	char	**array;

	// if(ac < 2)
		//write(1, "error", 6);
	array = 0;
	if (ac == 2)
	{
		array = ft_one_arg(av, array);
		if(!array || array[0] == NULL)
			error_msg("Error allocating ft_one_arg\n", 1);
	}
	if (ac > 2)
	{
		array = ft_many_args(av, ac, array);
		if(!array || array[0] == NULL)
			error_msg("Error allocating ft_many_args\n", 1);
	}
	// copy_array(array);
	// check_dublicates(array);
	if(!work_stack(array))
	{
		error_msg("Error\n", 1);
	}
	return (0);
}
