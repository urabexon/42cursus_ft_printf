/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:48:42 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/28 21:50:55 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//include
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

//prottype
int	ft_printf(const	char *format, ...);
int	ft_printf_char(char c); //%c
int	ft_printf_str(char *str); //%s
int	ft_printf_pointer(void *ptr); //%p
int	ft_printf_nbr(int n); //%d,%i
int	ft_printf_nbr_unsigned(unsigned int n); //%u
int	ft_printf_hex(unsigned int n, int uppercase); //%x,%X

#endif