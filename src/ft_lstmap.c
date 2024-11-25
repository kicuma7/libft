/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:56:20 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 11:01:12 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list  *aux;
    
    if (!lst || !f || !del)
        return (NULL);
    aux = ft_lstnew(f(lst->content));
    if (!aux)
    {
        ft_lstclear(&aux, del);
        return (NULL);
    }
    new_lst = aux;
    lst = lst->next;
    while (lst)
    {
        if (!(aux = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, aux);
        lst = lst->next;
    }
    return (new_lst);
}
