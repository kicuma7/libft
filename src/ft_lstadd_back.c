/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:58:22 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/12 20:01:39 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *begin_node;
    
    begin_node = *lst;
    while ((*lst)->next)
        *lst = (*lst)->next;
    (*lst)->next = new;
    *lst = begin_node;
}
