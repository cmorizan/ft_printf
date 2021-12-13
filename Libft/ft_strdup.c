/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:50:21 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 19:02:59 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ans;
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)s1);
	i = 0;
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (0);
	while (s1[i])
	{
		ans[i] = s1[i];
		i++;
	}
	ans[i] = 0;
	return (ans);
}
