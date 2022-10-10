/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:41:27 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 16:37:21 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
int main(int argc, char const *argv[])
{
	char  *s = "ilyas";
	printf("%s", ft_memchr(s, 'i', 3));
	return 0;
}