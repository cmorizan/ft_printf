/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:49:23 by cmorizan          #+#    #+#             */
/*   Updated: 2021/10/02 21:30:44 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	idx;
	size_t	len;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	idx = 0;
	while (idx < len)
	{
		f(idx, &s[idx]);
		idx++;
	}
}
