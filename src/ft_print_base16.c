/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base16.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:54:18 by cmorizan          #+#    #+#             */
/*   Updated: 2021/12/09 15:15:14 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_len(unsigned int i)
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

void ft_convert_hex(unsigned int i, const char fmt)
{
	if(i >= 16)
	{
		ft_convert_hex(i / 16, fmt);
		ft_convert_hex(i % 16, fmt);
	}
	else
	{
		if  (i <= 9)
			ft_putchar_fd(i + '0', 1);
		else
		{
			if (fmt == 'x')
				ft_putchar_fd((i - 10 + 'a'), 1);
			if (fmt == 'X')
				ft_putchar_fd((i - 10 + 'A'), 1);
		}
	}

}


int ft_print_unintbase16(unsigned int i, const char fmt)
{
	if (i == 0)
		return (write(1, "0", 1));
	else
		ft_convert_hex(i, fmt);
	return(ft_hex_len(i));

}