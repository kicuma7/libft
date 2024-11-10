/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:15:35 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 19:20:00 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    *ft_calloc(size_t num_elements, size_t size)
{
    void    *ptr;

    ptr = malloc(num_elements * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr,  num_elements * size);
    return (ptr);
}
