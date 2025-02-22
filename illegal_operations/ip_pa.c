/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ip_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:23:36 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 03:50:21 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "illegal_operations.h"

void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	index;

	if (*size_b == 0)
		return ;
	index = *size_a;
	while (index > 0)
	{
		stack_a[index] = stack_a[index - 1];
		index--;
	}
	stack_a[0] = stack_b[0];
	(*size_a)++;
	index = 0;
	while (index < *size_b - 1)
	{
		stack_b[index] = stack_b[index + 1];
		index++;
	}
	(*size_b)--;
}
