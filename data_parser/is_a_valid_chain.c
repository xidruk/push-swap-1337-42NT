/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_a_valid_chain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:42:12 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 23:46:08 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parser.h"

void	is_a_valid_chain(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc < 2)
	{
		print_error("Error");
		exit(1);
	}
	while (index < argc)
	{
		valid_single_param(argv[index]);
		index++;
	}
}
