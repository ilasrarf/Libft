/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:47:13 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 16:33:13 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	size_t i;

	i  = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	char    *s = "ilyasssasas";
// 	printf("------>%s\n", ft_strrchr(s, '9'));
// 	printf("------>%s", strrchr(s, '9'));
// }