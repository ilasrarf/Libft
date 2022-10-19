/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:35:22 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/16 19:07:01 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_atoi(char *str)
{
	int	i;
	int	res;
	int signe;
	int c;
	
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
	c = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - '0'; 
		i++;
		c++;
		// if (c >= 16)
		// 	return (0);
	}
	return (res * signe);
}

// int main(int argc, char **argv)
// {
// 	char *str = "   -21474836478";
// 	printf("%d\n=========\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// 	return 0;	
// }