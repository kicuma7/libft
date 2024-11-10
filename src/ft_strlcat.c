/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:32:27 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 16:17:29 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  src_len;
    size_t  dest_len;
    size_t  i;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    if (size <= dest_len)
        return (size + src_len);
    i = 0;
    while (src[i] && (i + dest_len) < (size - 1))
    {
        dest[i + dest_len] = src[i];
        i++;
    }
    dest[dest_len + (size - 1)] = '\0';
    return (src_len + dest_len);    
}
