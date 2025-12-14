/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:53:47 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/14 17:06:31 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     print_string(char   *str)
{
int i;

if (!str)
    return (NULL);
i = 0;
    while(str[i])
    {
        print_char(str[i]);
        i++; 
    }
return (i);
}