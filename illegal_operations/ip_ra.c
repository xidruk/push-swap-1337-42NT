/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ip_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:35:35 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 03:52:07 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "illegal_operations.h"

void	ra(int *stack_a, int size_a)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack_a[0];
	if (size_a < 2)
		return ;
	while (index < size_a - 1)
	{
		stack_a[index] = stack_a[index + 1];
		index++;
	}
	stack_a[size_a - 1] = tmp;
}
