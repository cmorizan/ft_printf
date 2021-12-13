/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:42:26 by cmorizan          #+#    #+#             */
/*   Updated: 2021/12/13 19:57:21 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unintbase10(unsigned int i)
{
	size_t len;
	char *num;

	len = 0;
	num = ft_itoa(i);
	ft_putstr_fd(num, 1);
	free(num);
	return (len);
}

int ft_print_intbase10(int i)
{
	size_t len;
	char *num;

	len = 0;
	num = ft_itoa(i);
	ft_putstr_fd(num, 1);
	free(num);
	return (len);
}