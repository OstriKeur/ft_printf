/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:00:49 by smorin            #+#    #+#             */
/*   Updated: 2023/11/29 14:00:36 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (str)
	{
		while (str[i])
		{
			count += ft_print_char(str[count]);
			i++;
		}
	}
	else
	{
		count += ft_print_str("(null)");
	}
	return (count);
}
