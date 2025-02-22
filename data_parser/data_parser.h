/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_parser.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:34:29 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 00:32:31 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_PARSER_H
# define DATA_PARSER_H

//===> includes 

# include "../printer/printer.h"
# include "../validators/validators_h.h"
# include <stdlib.h>
# include <stdio.h>

//===> functions 

void	glub_parser(int argc, char **argv);
void	valid_single_param(char *data);
void	is_a_valid_chain(int argc, char **argv);
void	validate_number(char *data);
void	kill_stupid_bug(char *data);
void	kill_extra_stupid_check(char *data);

#endif
