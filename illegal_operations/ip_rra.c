/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ip_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:46:09 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 03:52:30 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "illegal_operations.h"

void	rra(int *stack_a, int size_a)
{
	int	index;
	int	tmp;

	if (size_a < 2)
		return ;
	tmp = stack_a[size_a - 1];
	index = size_a - 1;
	while (index > 0)
	{
		stack_a[index] = stack_a[index - 1];
		index--;
	}
	stack_a[0] = tmp;
}
