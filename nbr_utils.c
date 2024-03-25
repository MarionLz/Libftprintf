/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maax <maax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:05 by malauzie          #+#    #+#             */
/*   Updated: 2024/03/25 09:58:39 by maax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_p(unsigned long nbr, char *base, int *len)
{
	unsigned long	base_len;

	base_len = ft_strlen(base);
	if (!nbr)
	{
		*len += write (1, "(nil)", 5);
		return ;
	}
	if (nbr >= base_len)
		ft_putnbr_p(nbr / base_len, base, len);
	*len += write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr(int n, int *len)
{
	long	long_n;
	char	result;

	long_n = n;
	result = 0;
	if (long_n < 0)
	{
		long_n *= -1;
		*len += write(1, "-", 1);
	}
	if (long_n >= 10)
		ft_putnbr(long_n / 10, len);
	result = (result * 10) + long_n % 10 + 48;
	*len += write (1, &result, 1);
}

void	ft_putnbr_base(unsigned int nbr, char *base, int *len)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base, len);
	*len += write(1, &base[nbr % base_len], 1);
}
