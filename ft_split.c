/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:19:23 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/28 05:22:32 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_cnt_words(char *str, char c)
{
	int i;
	int cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			cnt++;
		i++;	
	}
    if (i == 0)
        return 0;
	return (cnt+1);
}

static int ft_char_cnt(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i] && str[i] != c)
        i++;
    return (i);
}
static void ft_free(char **str)
{
    int i;

    i = 0;
    while(str[i] != NULL)
    {
        free(str[i]);
        i++;
    }
}

char **ft_split(char const *s, char c)
{
    char **res;
	int i;
	char *str;
	int cnt_w;

	if(!s)
		return (NULL);
	i = 0;
	str = ft_strtrim(s, &c);
	if (!str)
		return (0);
	cnt_w = ft_cnt_words(str, c);
	res = (char **)malloc(sizeof(char *) * cnt_w + sizeof(char *));
	if (!res)
		return 0;
	while (i < cnt_w)
	{
		while(*str == c)
			str++;
		res[i] = ft_substr(str, 0, ft_char_cnt(str, c));
		if(!res)
		{
			ft_free(res);
			return (0);
		}
		str = str + ft_char_cnt(str, c);
		i++;
	}
	res[i] = 0;
	return (res);
}
