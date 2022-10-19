/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:19:23 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/19 12:42:19 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//to skip the separator on the start/end
static char *ft_skip_sp(const char *s, char c)
{
	int i;
	size_t len;
	
	i = 0;
	while (s[i] && s[i] == c)
		s++;
	len = ft_strlen(s);
	while (len > 0 && s[len - 1] == c)
		len--;
	return (ft_substr(s, 0, len));	
}

static int ft_cnt_words(char *s, char c)
{
	int i;
	char *str;
	int cnt;

	cnt = 0;
	str = ft_skip_sp(s, c);
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			cnt++;
		i++;	
	}
	return (cnt + 1);
}

static int ft_char_cnt(char *s, char c)
{
	int i;
	char *str;
	
	i = 0;
	str = ft_skip_sp(s, c);
	while (str[i] && str[i] != c)
        i++;
    return (i);
}

char **ft_split(char const *s, char c)
{
	char *str;
	char **res;
    int j;
	int char_cnt;

	char_cnt = 0;
	j = 0;
	str = ft_skip_sp(s, c);
	res = (char **)malloc((sizeof(char *) * ft_cnt_words(str, c)) +1);
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0')
		{
			ft_strlcpy(res[j],str, ft_char_cnt(str, c));
			j++;
		}
		str = str + ft_char_cnt(str, c);
	}
	return (res);
}

int main()
{
	int i = 0;
  	char s[] = "   dfgh fgh dfgh  dfgh ghd  fgh  ";
  	char sp = ' ';
	char **res = ft_split(s, sp);
 	// printf("{%d}", ft_char_cnt(s, sp));
 	while (res[i])
 	{
		printf("%s", res[i]);
		printf("\n");
		i++;
	}
}