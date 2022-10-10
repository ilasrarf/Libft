/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:26:47 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 16:33:50 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	
	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}

// #include <string.h>
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	char str[] = "aaa";
// 	char str1[] = "aaa";
// 	char  dest[] = "ab";
// 	char  dest1[] = "ab";
// 	printf("%lu --- %s", strlcpy(dest, str, 0), dest);
// 	printf("\n------------\n");
// 	printf("%zu --- %s", ft_strlcpy(dest1, str1, 0), dest1);
	
// 	return 0;
// }


