/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:23:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/12 00:15:48 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *ss1 = (unsigned char *)s1;
	unsigned char *ss2 = (unsigned char *)s2;
	
	i = 0;
	while ((ss1[i] != '\0' || ss2[i] != '\0') && i < n)
	{
		if (ss1[i] < ss2[i])
			return (-1);
		else if (ss1[i] > ss2[i])
			return (1);
		i++;
	}
	return (0);
}