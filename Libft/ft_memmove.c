/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:12:47 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 18:26:55 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr1;
	unsigned const char	*ptr2;
	size_t				i;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	i = n;
	while (i > 0)
	{
		ptr1[i - 1] = ptr2[i - 1];
		i--;
	}
	return (dst);
}
