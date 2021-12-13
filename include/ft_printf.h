/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:14:14 by cmorizan          #+#    #+#             */
/*   Updated: 2021/12/09 23:03:02 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../Libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *fmt, ...);
int ft_perc_part(va_list args, const char fmt);
int ft_print_char(int c);
int ft_print_str(char *str);
int ft_print_percent(void);
int ft_ptr_len(unsigned int i);
void ft_convert_ptr(unsigned long long i);
int ft_print_ptr(unsigned long long ptr);
int ft_print_unintbase10(unsigned int i);
int ft_print_intbase10(int i);
int ft_hex_len(unsigned int i);
void ft_convert_hex(unsigned int i, const char fmt);
int ft_print_unintbase16(unsigned int i, const char fmt);

#endif