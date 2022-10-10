/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:06:52 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/09 16:33:58 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(c + 32) ;
	return (c);
}


// int main(int argc, char const *argv[])
// {
// 	char b = ft_toupper('a');
// 	printf("%c", b);
// 	return 0;
// }