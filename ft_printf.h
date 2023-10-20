/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzie <malauzie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:06:47 by malauzie          #+#    #+#             */
/*   Updated: 2023/10/20 15:44:07 by malauzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const	char *format, ...);
void	ft_putchar(char c, int *len);
int		ft_convert_arg(char indic, va_list args, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_p(unsigned long nbr, char *base, int *len);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void	ft_putnbr_basehex(unsigned int nbr, char *base, int *len);

#endif