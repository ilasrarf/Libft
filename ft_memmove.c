/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:57:38 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/13 20:41:12 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
    char *s;
    char *d;
	
	i = 0;
	s = (char *) src;
	d = (char *) dest;
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}


// int main(int argc, char const *argv[])
// {
// 	char *dest = malloc(20);
// 	for(int i = 1; i <= 20; i++)
// 		dest[i] = i;
// 	char *src = dest + 5;
// 	memmove(dest, src, 5);
// 	for(int i = 1; i <= 20; i++)
// 		printf("%i\n",dest[i]); 
// 	//printf("%s", ft_memmove(dest, src, 5)); 
// 	return 0;
// }
