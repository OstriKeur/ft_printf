/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:56:22 by smorin            #+#    #+#             */
/*   Updated: 2023/11/21 10:56:36 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long n, char deci)
{
	int		count;
	char	*deci_min;
	char	*deci_max;

	count = 0;
	deci_min = "0123456789abcdef";
	deci_max = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_print_hexa(n / 16, deci);
		count += ft_print_hexa(n % 16, deci);
	}
	else if (n < 16 && deci == 'x')
		count += ft_print_char(deci_min[n]);
	else if (n < 16 && deci == 'X')
		count += ft_print_char(deci_max[n]);
	return (count);
}