/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:15:28 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 08:20:43 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *aux;
    
    if (!del || !lst)
        return ;
    while (*lst)
    {
        aux = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = aux;
    }
}
