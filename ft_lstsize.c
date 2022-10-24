/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:30:23 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/23 21:46:54 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *temp;
	int i;
	
	i = 0;
	temp = lst;
	while (temp != NULL) 
	{
		i++;
		temp = temp->next;
	}
	return (i);
}