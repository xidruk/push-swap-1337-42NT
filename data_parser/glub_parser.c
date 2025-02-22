/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glub_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:39:46 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 22:41:53 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parser.h"

void	glub_parser(int argc, char **argv)
{
	if (argc < 2)
	{
		print_error("Error");
		exit(1);
	}
	is_a_valid_chain(argc, argv);
}
