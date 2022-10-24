/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:35:22 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/22 21:13:25 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_atoi(char *str)
{
	size_t	i;
	size_t	res;
	size_t signe;
	
	signe = 1;
	res = 0;
	i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
    if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
            signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - '0'; 
		i++;
	}
	return (res * signe);
}

// int main(int argc, char **argv)
// {
// 	char *str = "  -9223372036854775808";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// 	return 0;	
// }