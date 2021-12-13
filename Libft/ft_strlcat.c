/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:13:17 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 18:42:12 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i_dest;
	size_t	i_src;

	i = 0;
	i_dest = ft_strlen(dst);
	i_src = ft_strlen((char *)src);
	if (i_dest >= dstsize)
		return (dstsize + i_src);
	while (src[i] && i < dstsize - i_dest - 1)
	{
		dst[i_dest + i] = src[i];
		i++;
	}
	dst[i_dest + i] = '\0';
	return (i_dest + i_src);
}
