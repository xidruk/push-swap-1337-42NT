/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stupid_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:13:14 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 00:21:19 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parser.h"

void	kill_stupid_bug(char *data)
{
	if (is_valid_sign(*data) && is_valid_sign(*(data + 1)))
	{
		print_error("Error");
		exit(1);
	}
}

void	kill_extra_stupid_check(char *data)
{
	if (is_digit(*data) && is_valid_sign(*(data + 1)))
	{
		print_error("Error");
		exit(1);
	}
}
