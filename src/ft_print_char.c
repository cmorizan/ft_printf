/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:14:12 by cmorizan          #+#    #+#             */
/*   Updated: 2021/12/09 15:58:34 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_char(int fmt)
{	
	size_t len;

	len = 0;
	ft_putchar_fd(fmt++, 1);
	len++;
	return (len);
}

int ft_print_str(char *fmt)
{
	size_t len;

	len = 0;
	ft_putchar_fd(*fmt++, 1);
	len++;
	return (len);
}

int ft_print_percent(void)
{
	size_t len;

	len = 0;
	ft_putchar_fd('%', 1);
	len++;
	return (len);
}