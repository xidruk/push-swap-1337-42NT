/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:18:20 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 01:25:30 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_h.h"

int	is_sorted(int *_random_arr, int _arr_s)
{
	int	index;

	index = 0;
	if (!_random_arr)
	{
		printf("Error <NULL>");
		exit(1);
	}
	while (index < _arr_s - 1)
	{
		if (_random_arr[index] > _random_arr[index + 1])
			return (BAD_STATE);
		index++;
	}
	return (GOOD_STATE);
}
