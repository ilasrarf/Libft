/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:57:38 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 16:33:36 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	size_t j;
    char *s;
    char *d;
	char asest[n];
	
	i = 0;
	j = 0;
	s = (char *) src;
	d = (char *) dest;
	
	while (i < n)
	{
		asest[i] = s[i];
		i++;
	}
	while(j < n)
	{
		d[j] = asest[j];
		j++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[] = "123456789";
// 	char src1[] = "123456789";
// 	printf("%s\n",ft_memmove(src1 + 2,src1,6));
// 	printf("%s",memmove(src + 2,src,6));
// 	return 0;
// }