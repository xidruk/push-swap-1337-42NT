/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators_h.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:17:33 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 01:58:13 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATORS_H_H
# define VALIDATORS_H_H

//==> includes 

# include "../g_header.h"

int	is_sorted(int *_random_arr, int _arr_s);
int	is_duplicated(int *_random_arr, int _arr_s);
int	is_space(char c);
int	is_valid_sign(char c);
int	is_digit(char c);

//===> State MAcros !

# define BAD_STATE 13
# define GOOD_STATE 7

#endif
