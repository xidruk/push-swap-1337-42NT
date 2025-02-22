/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ip_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:54:37 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 03:50:41 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "illegal_operations.h"

void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	index;

	if (*size_a == 0)
		return ;
	index = *size_b;
	while (index > 0)
	{
		stack_b[index] = stack_b[index - 1];
		index--;
	}
	stack_b[0] = stack_a[0];
	(*size_b)++;
	index = 0;
	while (index < *size_a - 1)
	{
		stack_a[index] = stack_a[index + 1];
		index++;
	}
	(*size_a)--;
}
