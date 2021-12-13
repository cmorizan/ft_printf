/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:03:56 by cmorizan          #+#    #+#             */
/*   Updated: 2021/10/02 22:53:27 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

static int	get_sign(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

static int	overflow_str(int sign)
{
	if (sign == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	long			sign;
	long long		nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = sign * get_sign(str[i++]);
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		if ((nb * 10 + (str[i] - '0')) / 10 != nb)
		{
			return (overflow_str(sign));
		}
		nb = nb * 10 + (str[i++] - '0');
	}
	nb = nb * sign;
	return ((int)nb);
}
