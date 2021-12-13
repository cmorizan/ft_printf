/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:13:31 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 18:47:00 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = 0;
	i = ft_strlen((char *)s);
	while (s[i] != (char)c && i >= 0)
	{
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	else
		return (0);
}
