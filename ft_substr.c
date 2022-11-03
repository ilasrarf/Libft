/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:18:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/30 01:20:11 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*alloc;

	if (!s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	alloc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (0);
	while (i < len)
	{
		alloc[i] = s[start + i];
		i++;
	}
	alloc[i] = '\0';
	return (alloc);
}
