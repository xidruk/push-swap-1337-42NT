/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 03:54:08 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 05:31:35 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_header.h"

int	checkes_mother(int *mother_arr, int mother_size)
{
	if (is_duplicated(mother_arr, mother_size) == BAD_STATE)
	{
		print_error("Error");
		free(mother_arr);
		exit(1);
		return ((int)BRAHMA_FAILS);
	}
	if (is_sorted(mother_arr, mother_size) == GOOD_STATE)
	{
		free(mother_arr);
		exit(0);
		return ((int)BRAHMA_STUPID);
	}
	return ((int)BRAHMA_WIN);
}

int	main(int argc, char **argv)
{
	int	chain_size;
	int	*catint_res;
	int	index;

	index = 1;
	chain_size = 0;
	glub_parser(argc, argv);
	catint_res = catint(argc, argv);
	if (!catint_res)
	{
		print_error("Error");
		exit(1);
	}
	while (index < argc)
	{
		chain_size += count_integers(argv[index]);
		index++;
	}
	if (checkes_mother(catint_res, chain_size) == (int)BRAHMA_WIN)
		simulation_center(catint_res, chain_size);
	free(catint_res);
	return (0);
}
