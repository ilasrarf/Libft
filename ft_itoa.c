/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:37:21 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/11/03 15:00:20 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cheknumen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_alloc(int n)
{
	char	*num;
	int		numlen;

	numlen = ft_cheknumen(n);
	num = ft_calloc(numlen + 1, sizeof(char));
	if (!num)
		return (NULL);
	return (num);
}

char	*ft_itoa(int n)
{
	int		i;
	int		cnt;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_alloc(n);
	if (!str)
		return (NULL);
	cnt = ft_cheknumen(n);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i = 1;
	}
	while (i < cnt--)
	{
		str[cnt] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
