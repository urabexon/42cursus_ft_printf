/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:48:42 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/27 21:25:46 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//include
# include <stdarg.h>
# include <stdint.h>
// # include <string.h>
# include "libft/libft.h"

//prottype
int	ft_printf(const	char *input, ...);

#endif