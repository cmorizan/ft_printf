/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:13:55 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 17:11:23 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	t;
	int				i;

	ptr1 = (unsigned char *)s;
	t = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		if (t == ptr1[i])
		{
			return (&ptr1[i]);
		}
		i++;
	}
	return (NULL);
}
