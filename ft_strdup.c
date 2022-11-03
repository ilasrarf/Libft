/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:47:06 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/29 14:52:28 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*alloc;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(str);
	i = 0;
	alloc = (char *)malloc((str_len + 1) * sizeof(char));
	if (!alloc)
		return (0);
	return (ft_memcpy(alloc, str, str_len + 1));
}
