/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maax <maax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:06:47 by malauzie          #+#    #+#             */
/*   Updated: 2024/03/25 10:00:45 by maax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/*--------------------------------FT_PRINTF.c---------------------------------*/

int	ft_convert_arg(char indic, va_list args, int *len);
int	ft_printf(const	char *format, ...);

/*--------------------------------NBR_UTILS.c---------------------------------*/
void	ft_putnbr_p(unsigned long nbr, char *base, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_base(unsigned int nbr, char *base, int *len);

/*--------------------------------STR_UTILS.c---------------------------------*/
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
int		ft_strlen(char *str);

#endif