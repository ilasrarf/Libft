/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:41:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/07 16:58:16 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset (void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (char *)s;
	while (str[i] && i < n)
	{
		str[i] = c;
		i++;
	}
	return s;
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "ilyass";
// 	ft_memset(str, '*', 2);
// 	printf("%s", str);
// }