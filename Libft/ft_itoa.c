/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:04:17 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 19:02:08 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_len(long n)
{
	size_t	len;

	if (!n)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*ans;
	size_t		n_len;
	long long	m;

	m = (long long)n;
	n_len = ft_n_len(m);
	ans = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!ans)
		return (NULL);
	if (m == 0)
		ans[0] = '0';
	if (m < 0)
	{
		ans[0] = '-';
		m = m * (-1);
	}
	else if (0 <= m && m <= 9)
		ans[0] = m + '0';
	ans[n_len] = '\0';
	while (m)
	{
		ans[--n_len] = m % 10 + '0';
		m = m / 10;
	}
	return (ans);
}
