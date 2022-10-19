/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:33:03 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/15 22:56:11 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void    *mem;
	mem = malloc(size * count);
	if(!mem)
        return (0);
	ft_memset(mem, '\0', count * size);
    return (mem);	
}