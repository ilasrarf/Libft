/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:20:10 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/08 13:38:13 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s && *s != c)	
		s++;
	if(*s == c)
		return ((char *)s);
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "ilyass";
// 	printf("------>%s\n", ft_strchr(str, 'r'));
// 	printf("------>%s", strchr(str, 'r'));
// 	return 0;
// }
