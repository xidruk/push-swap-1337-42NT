/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_header.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:43:37 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 05:17:29 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef G_HEADER_H
# define G_HEADER_H

//===> Includes 

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
// # include <limits.h>

//===> extra includes

# include "printer/printer.h"
# include "data_parser/data_parser.h"
# include "atint/atint.h"
# include "validators/validators_h.h"
# include "illegal_operations/illegal_operations.h"
# include "glubpstate.h"

//===> functions 

void	setev_to_0(int *arr, int arr_size);
void	simulation_center(int *mother_arr, int orphans_count);

// // #define malloc(x) NULL

//===> ILLG moves ! 
# define PB 6996
# define RA 9696
# define RRA 9669
# define PA 6699

#endif