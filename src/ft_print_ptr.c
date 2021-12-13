/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:24:44 by cmorizan          #+#    #+#             */
/*   Updated: 2021/12/09 16:02:12 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_ptr_len(unsigned int i)
{
	int len;

	len = 0;
	while (i != 0)
	{
		len++;
		i = i/16;
	}
	return (len);
}

void ft_convert_ptr(unsigned long long i)
{
	if(i >= 16)
	{
		ft_convert_ptr(i / 16);
		ft_convert_ptr(i % 16);
	}
	else
	{
		if(i <= 9)
			ft_putchar_fd(i + '0', 1);
		else
			ft_putchar_fd((i - 10 + 'a'), 1);
	}
}

int ft_print_ptr(unsigned long long ptr)
{
	size_t len;
	char *num;

	len = 0;
	num = 0;
	num += write(1, "0x", 2);
	if(ptr == 0)
		num += write(1, "0", 1);
	else
	{
		ft_convert_ptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}