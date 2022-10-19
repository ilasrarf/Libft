/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:18:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/17 22:40:09 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	start_cnt; 
	char			*alloc;
	
	if (!s)
		return (0);
	i = 0;
	start_cnt = start;
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	alloc = (char *)malloc(len + 1);
	if (!alloc)
        return (0);
	while (i < len)
	{
		alloc[i] = s[start_cnt + i];
		i++;
 	}
	alloc[i] = '\0';
	return (alloc);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "ilyass asrarfi";
// 	printf("%s", ft_substr(str, 15, 2));
// 	return 0;
// }

