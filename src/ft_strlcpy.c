/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:05:32 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 11:29:10 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  null_char;

    if (size == 0)
        return (ft_strlen(src));
    if (ft_strlen(src) < size)
        i = ft_strlen(src);
    else
        i = size - 1;
    null_char = i;
    while (i--)
        dest[i] = src[i];
    dest[null_char] = '\0';
    return (ft_strlen(src));    
}
