/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:11:22 by cmorizan          #+#    #+#             */
/*   Updated: 2021/12/13 19:44:16 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_perc_part(va_list args, const char fmt)
{
	int ans;

	ans = 0;
	if (fmt == 'c')
		ans = ft_print_char(va_arg(args, char));
	else if (fmt == 's')
		ans = ft_print_str(va_arg(args, char *));
	else if (fmt == 'p')
		ans = ft_print_ptr(va_arg(args, unsigned long long));
	else if (fmt == 'd' || fmt == 'i')
		ans = ft_print_intbase10(va_arg(args, int));
	else if (fmt == 'u')
		ans = ft_print_unintbase10(va_arg(args, unsigned int));
	else if (fmt == 'x' || fmt == 'X')
		ans = ft_print_unintbase16(va_arg(args, unsigned int), fmt);
	else if (fmt == '%')
		ans = ft_print_percent();
	return (ans);
}

int ft_printf(const char *fmt, ...)
{
	va_list args;
	size_t len;

	len = 0;
	va_start(args, fmt);
	if (fmt == NULL)
		len = -1;
	while (*fmt)
	{
		if(*fmt != '%')
		{
			ft_putchar_fd(*fmt++, 1);
			len++;
		}
		else
		{
			ft_perc_part(args, *fmt++);
		}
		len++;
	}
	va_end(args);
	return (len);
}