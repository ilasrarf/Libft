/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:35:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 16:33:32 by ilasrarf         ###   ########.fr       */
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
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char dest[] = "ilyass";
// 	char src[] = "123";
// 	char dest1[] = "ilyass";
	
// 	printf("%s", memcpy(dest, src, 3));
// 	printf("\n-------------------\n");
// 	printf("%s", ft_memcpy(dest1, src, 3));

// }