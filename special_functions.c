/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 03:22:11 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 03:49:07 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_header.h"

void	setev_to_0(int *arr, int arr_size)
{
	int	index;

	index = 0;
	while (index < arr_size)
	{
		arr[index] = 0;
		index++;
	}
}
