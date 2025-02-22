/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_single_param.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:58:36 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 00:21:29 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parser.h"

void	skip_separators(char **data)
{
	while (is_space(**data))
	{
		(*data)++;
	}
}

void	validate_number(char *data)
{
	if (is_valid_sign(*data))
	{
		if (!is_digit(*(data + 1)))
		{
			print_error("Error");
			exit(1);
		}
		data++;
	}
	if (!is_digit(*data))
	{
		print_error("Error");
		exit(1);
	}
	while (is_digit(*data))
	{
		data++;
	}
	if (*data && !is_space(*data))
	{
		print_error("Error");
		exit(1);
	}
}

void	check_empty_or_end(char *data, int found_number)
{
	if (*data == '\0')
	{
		if (!found_number)
		{
			print_error("Error");
			exit(1);
		}
		return ;
	}
}

void	valid_single_param(char *data)
{
	int	found_number;

	found_number = 0;
	while (*data)
	{
		skip_separators(&data);
		check_empty_or_end(data, found_number);
		validate_number(data);
		found_number = 1;
		kill_stupid_bug(data);
		kill_extra_stupid_check(data);
		data++;
	}
	if (!found_number)
	{
		print_error("Error");
		exit(1);
	}
}
