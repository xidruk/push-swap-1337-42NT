/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:03:05 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 22:34:06 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atint.h"

int	get_total_size(int argc, char **argv)
{
	int	total_size;
	int	index;

	index = 1;
	total_size = 0;
	while (index < argc)
	{
		total_size += count_integers(argv[index]);
		index++;
	}
	return (total_size);
}

int	*collect_orphans(int *mother_arr, int argc, char **argv)
{
	int	index;
	int	rindian;
	int	track_mother;
	int	*orphan;

	index = 1;
	track_mother = 0;
	while (index < argc)
	{
		orphan = atint(argv[index]);
		if (!orphan)
		{
			free(mother_arr);
			return (NULL);
		}
		rindian = 0;
		while (rindian < count_integers(argv[index]))
		{
			mother_arr[track_mother++] = orphan[rindian];
			rindian++;
		}
		free(orphan);
		index++;
	}
	return (mother_arr);
}

int	*catint(int argc, char **argv)
{
	int	total_size;
	int	*result;

	result = NULL;
	total_size = get_total_size(argc, argv);
	result = malloc(total_size * sizeof(int));
	if (!result)
		return (NULL);
	result = collect_orphans(result, argc, argv);
	return (result);
}
