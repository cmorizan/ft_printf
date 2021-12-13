/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:04:45 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 16:37:14 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (('A' <= i && i <= 'Z')
		|| ('a' <= i && i <= 'z'))
	{
		return (1);
	}
	return (0);
}
