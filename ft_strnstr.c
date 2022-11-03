/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:39:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/31 11:52:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (j < len && haystack[j] && ((len - j) >= needle_len))
	{
		if (ft_memcmp(haystack + j, needle, needle_len) == 0)
			return ((char *)haystack + j);
		j++;
	}
	return (0);
}
