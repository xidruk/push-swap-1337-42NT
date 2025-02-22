/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   illegal_operations.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xidruk <xidruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:53:01 by xidruk            #+#    #+#             */
/*   Updated: 2025/02/22 02:30:47 by xidruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ILLEGAL_OPERATIONS_H
# define ILLEGAL_OPERATIONS_H

/*
    define illegal operations !
    --> [Operations On Stack A]
    | 1 - RA ? shift Up all Items by 1
    | 2 - RRA ? Shift down All items By 1
    --> [Operation To Stack B]
    | 3 - PB ? push Item in Top of Stack a To the Top of Stack b
    --> [Operations To Stack A]  
    | 4 - PA ? push Item in Top of Stack b To the Top of Stack a
*/

//===> Illegal Functions 

void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	ra(int *stack_a, int size_a);
void	rra(int *stack_a, int size_a);

#endif
