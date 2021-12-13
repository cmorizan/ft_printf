/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorizan <cmorizan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:04:23 by cmorizan          #+#    #+#             */
/*   Updated: 2021/09/08 22:34:30 by cmorizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ans_len2(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_ans_len(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		i = i + ans_len2(s + i, c);
		len++;
	}
	return (len);
}

static void	*clear(char **words, int i)
{
	while (i--)
	{
		free(*words);
		words++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	i;
	size_t	ans_len;
	size_t	len;

	if (!s)
		return (NULL);
	ans_len = ft_ans_len(s, c);
	ans = (char **)malloc(sizeof(char *) * (ans_len + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (ans_len--)
	{
		while (*s == c)
			s++;
		len = ans_len2(s, c);
		ans[i] = malloc(len + 1);
		if (!ans[i])
			return (clear(ans, i));
		ft_strlcpy(ans[i++], s, len + 1);
		s = s + len;
	}
	ans[i] = NULL;
	return (ans);
}
