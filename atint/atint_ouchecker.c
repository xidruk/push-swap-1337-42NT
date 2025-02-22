/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atint_ouchecker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:38:00 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 01:42:54 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atint.h"

int	atint_ouchecker(long num, long next_digit)
{
	if (num > INT_MAX / 10 || (num == INT_MAX / 10 && next_digit
			> INT_MAX % 10))
	{
		return (1);
	}
	if (num < INT_MIN / 10 || (num == INT_MIN / 10 && next_digit
			> -(INT_MIN % 10)))
	{
		return (-1);
	}
	return (0);
}
