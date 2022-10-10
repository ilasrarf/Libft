/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:03:28 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/07 17:54:20 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    char *str = (char *)s;
    while (str[i] && i < n)
    {
        str[i] = 0;
        i++;
    }
}
// #include <stdio.h>
// int main()
// {
//     char v[] = "ilyass";
//     ft_bzero(v, 3);

//     printf("%s", v);
// }