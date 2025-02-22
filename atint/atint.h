/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atint.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:29:40 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/21 10:44:57 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATINT_H
# define ATINT_H

//===> printer 

# include "../printer/printer.h"
# include "../validators/validators_h.h"
# include "../glubpstate.h"
# include <stdlib.h>

//===> define macros 

# define INT_MAX 2147483647
# define INT_MIN -2147483648

// Function declarations

int	*atint(const char *str);
int	atint_ouchecker(long actual, long next);
int	count_integers(const char *str);
int	*catint(int argc, char **argv);

#endif 
