/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:02:12 by smorin            #+#    #+#             */
/*   Updated: 2023/11/21 11:02:15 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checkarg(char li, va_list ap)
{
	int	compt;

	compt = 0;
	if (li == 'c')
		compt += ft_print_char(va_arg(ap, int));
	else if (li == 's')
		compt += ft_print_str(va_arg(ap, char *));
	else if (li == 'd' || li == 'i')
		compt += ft_print_int(va_arg(ap, long int));
	else if (li == 'u')
		compt += ft_print_usgnint(va_arg(ap, unsigned int));
	else if (li == 'x' || li == 'X')
		compt += ft_print_hexa(va_arg(ap, unsigned int), li);
	else if (li == 'p')
		compt += ft_print_ptr(va_arg(ap, long int));
	else if (li == '%')
		compt += ft_print_char('%');
	return (compt);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_checkarg(format[i + 1], ap);
			i++;
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (count);
}