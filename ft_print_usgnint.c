/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_usgnint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:01:34 by smorin            #+#    #+#             */
/*   Updated: 2023/11/21 11:01:41 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_usgnint(unsigned int nb)
{
	unsigned int	count;
	unsigned int	n;

	n = nb;
	count = 0;
	if (nb > 9)
	{
		count += ft_print_usgnint(n / 10);
		count += ft_print_usgnint(n % 10);
	}
	else if (nb <= 9)
		count += ft_print_char(n + '0');
	return (count);
}