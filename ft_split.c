/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:19:23 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/23 18:15:22 by ilasrarf         ###   ########.fr       */
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
	return (cnt + 1);
}

static int ft_char_cnt(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i] && str[i] != c)
        i++;
    return (i);
}

char **ft_split(char const *s, char c)
{
	char *str;
    char **res;
    int cn_word;
    int i;
    int to_cpy;
    int cn_char;
	if(!s)
		return (NULL);
    to_cpy = 0;
    i = 0;
    str = ft_skip_sp(s, c);
    cn_word = ft_cnt_words(str, c);
    cn_char = ft_char_cnt(str, c);
    res = (char **)ft_calloc(cn_word + 1, sizeof(char *));
    if (!res)
        return (0);
    while (i < cn_word)
    {
        while (*str == c)
            str++;
        if (cn_char)
        {
            res[i] = (char *)malloc((sizeof(char) * cn_char) + 1);
            to_cpy = 0;
            while (*str != c && *str != '\0')
            {
                res[i][to_cpy] = str[0];
                str++;
                to_cpy++;
            }
            res[i][to_cpy] = '\0';
        }    
        i++;    
    }
    return (res);
}

// int main()
// {
// 	int i = 0;
//   	char s[] = "            dfghg        hdfgh              ";
//   	char sp = ' ';
// 	char **res = ft_split(s, sp);
//  	while (i < 3)
//  	{
// 		printf("%s", res[i]);
// 		printf("\n");
// 		i++;
// 	}
// }