/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:04:27 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/05 19:12:57 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrchrset(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (ft_strrchr(set, s1[i]) != NULL)
			i--;
		else
			return (i);
	}
	return (i);
}

int	ft_strchrset(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) != NULL)
			i++;
		else
			return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	start = ft_strchrset(s1, set);
	end = ft_strrchrset(s1, set);
	len = (size_t)(end - start + 1);
	if (!s1[start])
		len = 0;
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	ft_memcpy(ans, s1 + start, len);
	ans[len] = '\0';
	return (ans);
}
