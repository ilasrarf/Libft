/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:35:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/13 13:19:59 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *s;
	char *d;
	
	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if(!dest && !src)
		return NULL;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
