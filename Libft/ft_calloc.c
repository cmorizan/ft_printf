/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:03:50 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/09 00:19:40 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	long	*ftCMem;

	ftCMem = malloc(size * count);
	if (!ftCMem)
		return (0);
	ft_memset (ftCMem, 0, size * count);
	return ((void *)ftCMem);
}
