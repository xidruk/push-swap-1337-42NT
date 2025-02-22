/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicated.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:25:03 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 05:27:40 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_h.h"

int	is_duplicated(int *_random_arr, int _arr_s)
{
	int	index;
	int	break_point;

	index = 0;
	while (index < _arr_s - 1)
	{
		break_point = index + 1;
		while (break_point < _arr_s)
		{
			if (_random_arr[index] == _random_arr[break_point])
			{
				return (BAD_STATE);
			}
			break_point++;
		}
		index++;
	}
	return (GOOD_STATE);
}
