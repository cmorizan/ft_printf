/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:34:42 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 18:46:24 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *s2, size_t n)
{
	size_t	countlen;
	size_t	s2_len;
	char	*ptr;
	size_t	i;

	countlen = 0;
	if (ft_strlen(haystack) < n)
		countlen = ft_strlen(haystack);
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)haystack);
	else if (n == 0)
		return (NULL);
	ptr = (char *)haystack;
	i = 0;
	countlen = n;
	while (*ptr != 0 && i < countlen - s2_len + 1)
	{
		if (ft_memcmp(ptr, s2, s2_len) == 0)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
