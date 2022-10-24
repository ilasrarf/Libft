/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:51:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/20 22:10:44 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if(n < 0)
	{
		ft_putchar_fd('-', fd);
        n = n * -1;
	}
	if(n >= 0 && n <= 9)
        ft_putchar_fd((n + '0'), fd);
	if(n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}

// int main(int argc, char const *argv[])
// {
// 	int n = -2147483648;
// 	ft_putnbr_fd(n, 1);
// 	return 0;
// }
