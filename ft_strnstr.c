/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:39:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/16 01:01:31 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	needle_len;
	
	char *tofind = (char *)haystack;
	needle_len = ft_strlen(needle);
	j = 0;
	if (needle[0] == '\0')
		return (tofind);
	while (j < len && tofind[j])
	{
		if((len - j) >= needle_len)
		{
			if (ft_memcmp(tofind + j, needle, needle_len) == 0)
			{
				return (tofind + j);
			}
		}
		j++;
	}
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	char *s = "hi go fuck your self";
// 	char *find = "go";
// 	printf("|%s|\n", ft_strnstr(s, find, 15));
// 	printf("|%s|", strnstr(s, find, 15));
// 	return 0;
// }