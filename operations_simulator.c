/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_simulator.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:13:45 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 04:41:41 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_header.h"

int	find_smallest_index(int *stack_a, int size_a)
{
	int	min_index;
	int	index;

	min_index = 0;
	index = 1;
	while (index < size_a)
	{
		if (stack_a[index] < stack_a[min_index])
		{
			min_index = index;
		}
		index++;
	}
	return (min_index);
}

void	supreme_authority(int steps, int flag, int *stack_a, int size_a)
{
	int	tracker;

	tracker = 0;
	if (flag == RA)
	{
		while (tracker < steps)
		{
			ra(stack_a, size_a);
			prdata("ra");
			tracker++;
		}
	}
	if (flag == RRA)
	{
		while (tracker < steps)
		{
			rra(stack_a, size_a);
			prdata("rra");
			tracker++;
		}
	}
}

void	rotate_smallest_to_top(int *stack_a, int size_a)
{
	int	min_index;
	int	steps_ra;
	int	steps_rra;
	int	count;

	min_index = find_smallest_index(stack_a, size_a);
	steps_ra = min_index;
	steps_rra = size_a - min_index;
	if (steps_ra <= steps_rra)
	{
		supreme_authority(steps_ra, RA, stack_a, size_a);
	}
	else
	{
		supreme_authority(steps_rra, RRA, stack_a, size_a);
	}
}

void	simulate_operations(int *stack_a, int *size_a,
		int *stack_b, int *size_b)
{
	while (*size_a > 0)
	{
		rotate_smallest_to_top(stack_a, *size_a);
		pb(stack_a, size_a, stack_b, size_b);
		prdata("pb");
	}
	while (*size_b > 0)
	{
		pa(stack_a, size_a, stack_b, size_b);
		prdata("pa");
	}
}

void	simulation_center(int *mother_arr, int orphans_count)
{
	int	size_a;
	int	size_b;
	int	*stack_b;

	if (orphans_count < 2)
		return ;
	stack_b = malloc(orphans_count * sizeof(int));
	if (!stack_b)
	{
		print_error("Error");
		exit(1);
	}
	setev_to_0(stack_b, orphans_count);
	size_b = 0;
	size_a = orphans_count;
	simulate_operations(mother_arr, &size_a, stack_b, &size_b);
	free(stack_b);
}
