/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:11:02 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/22 17:16:34 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int print_num(long i)
{
	if (i < 0)
	{
		print_char('-');
		return (1 + print_num(-i));
	}
	if (i >= 10)
		return (print_num (i / 10) + print_char('0' + i % 10), 1);
	print_char ('0' + i);
	return (1);
}*/
int print_num(long i)
{
	int w;
	int	rec;
	
	if (i < 0)
	{
		w = print_char('-');
		if (w == -1)
			return(-1);
		rec = print_num(-i);
		if (rec == -1)
			return(-1);
	if (i >= 10)
	{
		rec = print_num (i / 10);
		if (rec == -1)
			return(-1);
		w = print_char('0' + i % 10);
		if (w == -1)
			return(-1);
		return (rec + 1);
	}
	if (print_char('0' + i) == -1)
		return (-1);
	return (1);
}
