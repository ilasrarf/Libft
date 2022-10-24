/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:39:37 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/23 16:38:21 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char *str;
	size_t len;
	
	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;	
	}
	str[i] = '\0';
    return (str);
}