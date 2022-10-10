/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:06:36 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 19:39:06 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char *ss1;
	char *ss2;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while ((ss1[i] != '\0' || ss2[i] != '\0') && i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	char *s1 = "i";
// 	char *s2 = "i";
// 	printf("%d\n", ft_memcmp(s1, s2, 0));
// 	printf("%d", memcmp(s1, s2, 2));
// 	return 0;
// }