/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/27 09:00:51 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_input(char **array)
{
	int i = 0;
	int j = 0;

	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			if ((array[i][j] == '-' && !ft_isdigit(array[i][j + 1])) ||
				(array[i][j] == '+' && !ft_isdigit(array[i][j + 1])))
				return (0);
			if (!ft_isdigit(array[i][j]) && (array[i][j] != '-' && array[i][j] != '+'))
				return (0);
			j++;
		}
		i++;
	}
	return 1;
}

char	**ft_one_arg(char **av, char **array)
{
	array = ft_split(av[1], 32);
	if (!array || array == 0)
		error_msg("Error\n", array, 1);
	return (array);
}

char	**ft_many_args(char **av, int ac, char **array)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	array = (char **)ft_calloc(sizeof(char *), ac);
	if (!array || array == 0)
		error_msg("Error\n", array, 1);
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
		if(!array || array == NULL)
		{
			free_array(array);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	else if (ac > 2)
	{
		array = ft_many_args(av, ac, array);
		if(!array || array == NULL)
		{
			free_array(array);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	if (!check_input(array))
	{
		free_array(array);
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	work_stack(array);
	return (0);
}
