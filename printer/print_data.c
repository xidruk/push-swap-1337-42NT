/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:41:07 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 00:41:58 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printer.h"

void	prdata(char *data)
{
	int	_index;

	_index = 0;
	if (!data)
		return ;
	while (data[_index])
	{
		write(PSIMPLE, &data[_index], 1);
		_index++;
	}
	write(PSIMPLE, "\n", 1);
}
