/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:15 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/29 14:58:10 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alloc;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	alloc = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!alloc)
		return (0);
	while (s1[i])
	{
		alloc[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		alloc[i] = s2[j];
		j++;
		i++;
	}
	alloc[i] = '\0';
	return (alloc);
}
