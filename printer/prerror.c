/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prerror.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:42:05 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 00:42:25 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printer.h"

void	print_error(char *data)
{
	int	_index;

	_index = 0;
	if (!data)
		return ;
	write(PERROR, "\x1b[31m", 6);
	while (data[_index])
	{
		write(PERROR, &data[_index], 1);
		_index++;
	}
	write(PERROR, "\n", 1);
	write(PERROR, "\033[0m\n", 4);
}
