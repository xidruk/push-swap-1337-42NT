/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:33:01 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 00:39:50 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_H
# define PRINTER_H

//===> Include 

# include <unistd.h>

//===> Define Macros 

# define PERROR 2
# define PSIMPLE 1

//===> include functions 

void	print_error(char *data);
void	prdata(char *data);

#endif
