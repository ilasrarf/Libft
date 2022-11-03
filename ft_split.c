/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:19:23 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/29 14:36:40 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_my_strtrim(const char *s1, char set)
{
	int		len_s1;
	char	*str;

	str = (char *)s1;
	if (!str)
		return (0);
	while (*str && *str == set)
		str++;
	len_s1 = ft_strlen(str);
	while (len_s1 > 0 && str[len_s1 - 1] == set)
		len_s1--;
	return (ft_substr(str, 0, len_s1));
}

static int	ft_cnt_words(char *str, char c)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			cnt++;
		i++;
	}
	if (i == 0)
		return (0);
	return (cnt + 1);
}

static int	ft_char_cnt(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_append(char **res, char *str, char c, int cnt_w)
{
	int	i;

	i = 0;
	while (i < cnt_w)
	{
		while (*str == c)
			str++;
		res[i] = ft_substr(str, 0, ft_char_cnt(str, c));
		if (!res)
		{
			i = 0;
			while (res[i] != NULL)
			{
				free(res[i]);
				i++;
			}
			free(res);
			return (NULL);
		}
		str += ft_char_cnt(str, c);
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		cnt_w;
	char	*str;

	i = 0;
	str = ft_my_strtrim(s, c);
	if (!s || !str)
		return (NULL);
	cnt_w = ft_cnt_words(str, c);
	res = (char **)ft_calloc((cnt_w + 1), sizeof(char *));
	if (!res)
		return (0);
	res = ft_append(res, str, c, cnt_w);
	free(str);
	return (res);
}
