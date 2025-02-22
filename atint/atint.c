/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atint.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:58:41 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 10:59:23 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atint.h"

int	count_integers(const char *str)
{
	int			count;
	const char	*ptr;

	count = 0;
	ptr = str;
	while (*ptr)
	{
		while (is_space(*ptr))
			ptr++;
		if (!*ptr)
			break ;
		if (is_valid_sign(*ptr))
			ptr++;
		while (is_digit(*ptr))
			ptr++;
		count++;
	}
	return (count);
}

int	get_number_value(const char **ptr, int sign)
{
	long	num;
	long	next_digit;

	num = 0;
	while (is_digit(**ptr))
	{
		next_digit = **ptr - '0';
		if (atint_ouchecker(num, next_digit))
		{
			print_error("Error");
			return (ATINT_FOVUF);
		}
		num = num * 10 + next_digit;
		(*ptr)++;
	}
	return (sign * num);
}

int	*parse_number(const char **ptr, int *index, int *result)
{
	int	sign;
	int	value;

	sign = 1;
	while (is_space(**ptr))
		(*ptr)++;
	if (!**ptr)
		return (result);
	if (**ptr == '-')
	{
		sign = -1;
		(*ptr)++;
	}
	if (**ptr == '+')
		(*ptr)++;
	value = get_number_value(ptr, sign);
	if (value == ATINT_FOVUF && sign == 1)
	{
		free(result);
		exit(1);
	}
	result[(*index)++] = value;
	return (result);
}

int	*atint(const char *str)
{
	int			size;
	int			*result;
	int			index;
	const char	*ptr;

	index = 0;
	ptr = str;
	size = count_integers(str);
	result = malloc(size * sizeof(int));
	if (!result)
		return ((int *)MLCFAILS);
	while (*ptr)
	{
		result = parse_number(&ptr, &index, result);
		if (!*ptr)
			break ;
	}
	return (result);
}
