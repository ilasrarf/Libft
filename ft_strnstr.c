/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:39:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/10 17:09:34 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t i;
	//size_t j;
	size_t len_f;
	
	i = 0;
	len_f = ft_strlen(find);
	while (s[i])
	{
		if(ft_strncmp((s + i), find, len_f) == 0)
			return;
	}
}

int main(int argc, char const *argv[])
{
	ft_strnstr("12345678", "456", 8);
	return 0;
}