/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:36:21 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 18:48:20 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *str_src;
    char    *str_dest;
    unsigned int    i;

    str_src = (char *)src;
    str_dest = (char *)dest;
    i = 0;
    while (n--)
        *str_dest++ = *str_src++;
    return (dest);
}
