/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzie <maax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:06:42 by malauzie          #+#    #+#             */
/*   Updated: 2024/03/25 09:59:10 by maax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_arg(char indic, va_list args, int *len)
{
	if (indic == 'c')
		ft_putchar(va_arg(args, int), len);
	if (indic == 's')
		ft_putstr(va_arg(args, char *), len);
	if (indic == 'p')
	{
		len += write(1, "0x", 2);
		ft_putnbr_p(va_arg(args, unsigned long), "0123456789abcdef", len);
	}
	if (indic == 'd' || indic == 'i')
		ft_putnbr(va_arg(args, int), len);
	if (indic == 'u')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789", len);
	if (indic == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", len);
	if (indic == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	if (indic == '%')
		ft_putchar('%', len);
	return (0);
}

int	ft_printf(const	char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i], &len);
		else
		{
			i++;
			len += ft_convert_arg(format[i], args, &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}
